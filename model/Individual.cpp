//
// Created by mz on 25/05/17.
//

#include <iostream>
#include "Individual.h"

Individual::Individual(vector<string> values) {

    // attributes
    int str = stoi(values.at(0));
    int agi = stoi(values.at(1));
    int vit = stoi(values.at(2));
    int intel = stoi(values.at(3));
    //class
    string iClass = (string) values.at(4);
    // level
    int level = stoi(values.at(5));
    // exp
    int exp = stoi(values.at(6));
    // element
    string element = (string) values.at(7);
    // weapon
    float weaponAttack = stoi(values.at(8));

    setHp(HeartPoint(vit));
    setSp(SpellPoint(intel));
    setAttribute(Attribute(str, agi, vit, intel));
    setElement(element);
    setWeapon(Weapon(weaponAttack));
    setLevel(Level(level, exp));
}

const HeartPoint &Individual::getHp() const {
    return hp;
}

void Individual::setHp(const HeartPoint &hp) {
    Individual::hp = hp;
}

const SpellPoint &Individual::getSp() const {
    return sp;
}

void Individual::setSp(const SpellPoint &sp) {
    Individual::sp = sp;
}

const Attribute &Individual::getAttribute() const {
    return attribute;
}

void Individual::setAttribute(const Attribute &attribute) {
    Individual::attribute = attribute;
}

const string &Individual::getElement() const {
    return element;
}

void Individual::setElement(const string &element) {
    Individual::element = element;
}

const Weapon &Individual::getWeapon() const {
    return weapon;
}

void Individual::setWeapon(const Weapon &weapon) {
    Individual::weapon = weapon;
}

const Level &Individual::getLevel() const {
    return level;
}

void Individual::setLevel(const Level &level) {
    Individual::level = level;
}

const vector<Skill> &Individual::getSkills() const {
    return skills;
}

void Individual::setSkills(const vector<Skill> &skills) {
    Individual::skills = skills;
}

void Individual::print() const {
    printf("HP: %d %d\n", hp.getCurrentHp(), hp.getMaxHp());
    printf("SP: %d %d\n", sp.getCurrentSp(), sp.getMaxSp());

    printf("Attributes: %d %d %d %d\n",
           attribute.getStrength(),
           attribute.getAgillity(),
           attribute.getVitality(),
           attribute.getIntelligence());

    cout << element << endl;
    printf("Weapon: %.2f%%\n", weapon.getAttackPercentage());
    printf("Level: %d %d\n", level.getExp(), level.getLvl());
}


