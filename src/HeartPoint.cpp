//
// Created by Alisson on 25/05/2017.
//

#include "../include/HeartPoint.h"

HeartPoint::HeartPoint(int vitality) {
    calculateMaxHp(vitality);
    currentHp = maxHp;
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
    setMaxHp(vitality * variableHp);
}

HeartPoint::HeartPoint() {

}
