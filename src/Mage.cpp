//
// Created by mz on 02/06/17.
//

#include "../include/Mage.h"

Mage::Mage(const vector<string> &values) : Individual(values) {}

void Mage::performAttack(Individual &target) {
    Individual::performAttack(target);
}