//
// Created by amaro on 25/05/2017.
//

#include "../include/Level.h"

Level::Level() {}

Level::Level(int lvl, int exp, int nextLevel) : lvl(lvl), exp(exp), nextLvl(nextLevel) {}

int Level::getNextLvl() const {
    return nextLvl;
}

void Level::setNextLvl(int nextLevel) {
    Level::nextLvl = nextLevel;
}

int Level::getExp() const {
    return exp;
}

void Level::setExp(int exp) {
    Level::exp = exp;
}

int Level::getLvl() const {
    return lvl;
}

void Level::setLvl(int lvl) {
    Level::lvl = lvl;
}

void Level::levelUp(int remainingExp) {
    lvl++;
    nextLvl *= NEXT_LEVEL_RATE;
    exp = remainingExp;
}

int Level::addExp(int exp) {
    Level::exp += exp;
    if (Level::exp >= nextLvl) {
        int remainingExp = Level::exp - nextLvl;
        levelUp(remainingExp);
        return LEVEL_UP;
    }
    return 0;
}


