//
// Created by amaro on 25/05/2017.
//

#include "Level.h"

Level::Level() {}

Level::Level(int exp, int lvl) : exp(exp), lvl(lvl) {}

int Level::getNextLvl() const {
    return nextLvl;
}

void Level::setNextLvl(int nextLevel) {
    Level::nextLvl = nextLevel;
}

const int Level::getMIN() {
    return MIN;
}

const int Level::getMAX() {
    return MAX;
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

int Level::levelUp(int expBar, int lvl) {
    lvl+=1;
    nextLvl = nextLvl*2;

}

void Level::addExp(int exp){
    int aux=0;
    aux+=exp;
    if(aux >= nextLvl)
        levelUp(nextLvl, lvl);
}


