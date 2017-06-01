//
// Created by Alisson on 25/05/2017.
//

#include "Attribute.h"

Attribute::Attribute(int strength, int agillity, int vitality, int intelligence) {
    setStrength(strength);
    setAgillity(agillity);
    setVitality(vitality);
    setIntelligence(intelligence);
}

int Attribute::getStrength() const {
    return strength;
}

void Attribute::setStrength(int strength) {
    Attribute::strength = strength;
}

int Attribute::getAgillity() const {
    return agillity;
}

void Attribute::setAgillity(int agillity) {
    Attribute::agillity = agillity;
}

int  Attribute::getVitality() const {
    return vitality;
}

void Attribute::setVitality(int vitality) {
    Attribute::vitality = vitality;
}

int Attribute::getIntelligence() const {
    return intelligence;
}

void Attribute::setIntelligence(int intelligence) {
    Attribute::intelligence = intelligence;
}



