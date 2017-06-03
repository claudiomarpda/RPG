//
// Created by mz on 02/06/17.
//

#include "../include/Warrior.h"

Warrior::Warrior(const vector<string> &values) : Individual(values) {}

void Warrior::performAttack(Individual &target) {
    Individual::performAttack(target);
}
