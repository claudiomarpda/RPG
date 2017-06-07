//
// Created by mz on 01/06/17.
//

#include "../include/Skill.h"

const string FIRE = "Fire";
const string BLIZZARD = "Blizzard";
const string WIND = "Wind";
const string EARTH = "Earth";

const string &Skill::getName() const {
    return name;
}

void Skill::setName(const string &name) {
    Skill::name = name;
}

int Skill::getSpConsumption() const {
    return spConsumption;
}

void Skill::setSpConsumption(int spConsumption) {
    Skill::spConsumption = spConsumption;
}

Skill::Skill(const string &name, int spConsumption, const string &element) :
        name(name), spConsumption(spConsumption), element(element) {}

const string &Skill::getElement() const {
    return element;
}

void Skill::setElement(const string &element) {
    Skill::element = element;
}
