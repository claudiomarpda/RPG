//
// Created by amaro on 25/05/2017.
//

#include "../include/Weapon.h"

Weapon::Weapon() {}

Weapon::Weapon(float attackPercentage) : attackPercentage(attackPercentage) {}

float Weapon::getAttackPercentage() const {
    return attackPercentage;
}

void Weapon::setAttackPercentage(float attackPercentage) {
    Weapon::attackPercentage = attackPercentage;
}

float Weapon::calculateAttack(float attackPercentage) {
    return attackPercentage/100;
}



