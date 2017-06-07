//
// Created by mz on 03/06/17.
//

#include <iostream>
#include "../include/AttackManager.h"
#include "../include/Log.h"
#include "../include/Element.h"

/**
 * Calculates the power of an physical attack done and subtracts from target's physical defense.
 */
void AttackControl::managePhysicalAttack(Individual &attacker, Individual &target) {

    if (Log::ON) {
        Log::write("Target HP before: " + to_string(target.getHp().getCurrentHp()));
    }

    int attackStrength = attacker.getAttribute().getStrength();
    int attackPower = (int) (attackStrength + (attackStrength * attacker.getWeapon().calculateAttack()));
    int defense = target.getAttribute().getVitality();
    int damage = attackPower - defense;

    if (damage <= 0) {
        damage = 1;
    }

    target.getHp().decrease(damage);

    if (Log::ON) {
        Log::write(attacker.getJob() + " caused " + to_string(damage) + " damage to " + target.getJob());
        Log::write("Target HP after: " + to_string(target.getHp().getCurrentHp()));
    }
}

/**
 * Calculates the power of an magical attack done and subtracts from target's magical defense.
 */
void AttackControl::manageMagicalAttack(Individual &attacker, Individual &target) {
    if (Log::ON) {
        Log::write("Target HP before: " + to_string(target.getHp().getCurrentHp()));
    }

    int intPower = attacker.getAttribute().getIntelligence();
    int magicPower = (int) (intPower + (intPower * attacker.getWeapon().calculateAttack()));
    int magicalDefense = target.getAttribute().getIntelligence();
    int damage = magicPower - magicalDefense;

    if (damage <= 0) {
        damage = 1;
    }

    // TODO: get the magical attack from individual's skill
//    Skill skill = attacker.getSkills().at(0);

    cout << "damage antes" << damage << endl;
    // calculates the damage according to element comparison between attacker and target
    damage = (int) (damage + (damage * Element::compare(Element::FIRE, target.getElement())));

    target.getHp().decrease(damage);
    cout << "damage depois" << damage << endl;

    if (Log::ON) {
        Log::write(attacker.getJob() + " caused " + to_string(damage) + " damage to " + target.getJob());
        Log::write("Target HP after: " + to_string(target.getHp().getCurrentHp()));
    }
}
