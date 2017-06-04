//
// Created by mz on 02/06/17.
//

#include <iostream>
#include "../include/Mage.h"

Mage::Mage(const vector<string> &values) : Individual(values) {}

void Mage::performAttack(Individual &target) {
    Individual::performAttack(target);
}

void Mage::levelUp() {
    std::cout << "mage level up\n";
    Attribute a = getAttribute();
    a.setIntelligence(a.getIntelligence() + INT_LEVEL_UP);
    setAttribute(a);
}
