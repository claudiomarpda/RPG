//
// Created by mz on 02/06/17.
//

#include "../include/Warrior.h"
#include "../include/Log.h"

Warrior::Warrior(const vector<string> &values) : Individual(values) {}

void Warrior::performAttack(Individual &target) {
    Individual::performAttack(target);
}

void Warrior::levelUp() {
    if (Log::ON) {
        Log::write(getJob() + " level up");
    }
    Attribute a = getAttribute();
    a.setStrength(a.getStrength() + STR_LEVEL_UP);
    a.setAgility(a.getAgility() + AGI_LEVEL_UP);
    a.setVitality(a.getVitality() + VIT_LEVEL_UP);
    setAttribute(a);
}
