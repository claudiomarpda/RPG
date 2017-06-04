//
// Created by mz on 02/06/17.
//

#include <iostream>
#include "../include/Mage.h"
#include "../include/Log.h"

Mage::Mage(const vector<string> &values) : Individual(values) {}

void Mage::performAttack(Individual &target) {
    Individual::performAttack(target);
}

void Mage::levelUp() {
    if (Log::ON) {
        Log::write(getJob() + " level up");
    }
    Attribute a = getAttribute();
    a.setIntelligence(a.getIntelligence() + INT_LEVEL_UP);
    setAttribute(a);
}
