//
// Created by mz on 01/06/17.
//

#include "../include/Skill.h"

Skill::Skill(const string &name, int spConsumption, const string &element) : name(name), spConsumption(spConsumption), element(element) {}

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
