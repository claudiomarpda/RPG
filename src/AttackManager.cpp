//
// Created by mz on 03/06/17.
//

#include <iostream>
#include "../include/AttackManager.h"
#include "../include/Log.h"

/**
 * Calculates the power of an physical attack done and subtracts from target's physical defense.
 */
void AttackControl::managePhysicalAttack(Individual &attacker, Individual &target) {

    if (Log::ON) {
        Log::write("Target HP before: " + to_string(target.getHp().getCurrentHp()));
    }

    int attackPower = (int) attacker.getWeapon().calculateAttack() * attacker.getAttribute().getStrength();
    int defense = target.getAttribute().getVitality();
    int damage = attackPower - defense;

    if (damage < 0) {
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

}
