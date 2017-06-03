//
// Created by Alisson on 25/05/2017.
//

#include <iostream>
#include "../include/HeartPoint.h"

HeartPoint::HeartPoint() {

}

HeartPoint::HeartPoint(int vitality) {
    setMaxHp(calculateMaxHp(vitality));
    setCurrentHp(maxHp);
}

int HeartPoint::getMaxHp() const {
    return maxHp;
}

void HeartPoint::setMaxHp(int maxHp) {
    HeartPoint::maxHp = maxHp;
}

int HeartPoint::getCurrentHp() const {
    return currentHp;
}

void HeartPoint::setCurrentHp(int currentHp) {
    HeartPoint::currentHp = currentHp;
}

int HeartPoint::calculateMaxHp(int vitality) {
    return vitality * variableHp;
}

void HeartPoint::decrease(int damage) {
    HeartPoint::currentHp -= damage;
    if (currentHp < 0) {
        currentHp = 0;
    }
}
