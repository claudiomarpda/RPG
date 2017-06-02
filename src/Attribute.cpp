//
// Created by Alisson on 25/05/2017.
//

#include "../include/Attribute.h"

Attribute::Attribute() {

}

Attribute::Attribute(int strength, int agility, int vitality, int intelligence) {
    setStrength(strength);
    setAgility(agility);
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
    return agility;
}

void Attribute::setAgility(int agility) {
    Attribute::agility = agility;
}

int Attribute::getVitality() const {
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





