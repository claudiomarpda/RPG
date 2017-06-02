//
// Created by Alisson on 25/05/2017.
//

#include "SpellPoint.h"

SpellPoint::SpellPoint(int intelligence) {
    calculateMaxSp(intelligence);
    currentSp = maxSp;
}

int SpellPoint::getMaxSp() const {
    return maxSp;
}

void SpellPoint::setMaxSp(int maxSp) {
    SpellPoint::maxSp = maxSp;
}

int SpellPoint::getCurrentSp() const {
    return currentSp;
}

void SpellPoint::setCurrentSp(int currentSp) {
    SpellPoint::currentSp = currentSp;
}

int SpellPoint::calculateMaxSp(int intelligence) {
    setMaxSp(intelligence * variableSp);
}

SpellPoint::SpellPoint() {

}


