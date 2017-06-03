//
// Created by mz on 25/05/17.
//

#include <fstream>
#include <iostream>
#include "../include/Individual.h"

Individual::Individual(vector<string> values) {

    // attributes
    int str = stoi(values.at(0));
    int agi = stoi(values.at(1));
    int vit = stoi(values.at(2));
    int intel = stoi(values.at(3));
    // job
    string job = (string) values.at(4);
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
    setJob(job);

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

void Individual::print(ofstream &outLogger) const {
    outLogger << job << endl;
    outLogger << "Current HP: " + to_string(hp.getCurrentHp()) + " Max HP: " + to_string(hp.getMaxHp()) << endl;
    outLogger << "Current SP: " + to_string(sp.getCurrentSp()) + " Max SP: " + to_string(sp.getMaxSp()) << endl;

    outLogger << "Attributes: " +
                 to_string(attribute.getStrength()) + " " +
                 to_string(attribute.getAgillity()) + " " +
                 to_string(attribute.getVitality()) + " " +
                 to_string(attribute.getIntelligence()) << endl;

    outLogger << "Element: " + element << endl;
    outLogger << "Weapon: " << fixed << to_string(weapon.getAttackPercentage()) << endl;
    outLogger << "Level: " + to_string(level.getLvl()) + " EXP: " + to_string(level.getExp()) << endl;
    outLogger << endl;

    printf("Attributes: %d %d %d %d\n",
           attribute.getStrength(),
           attribute.getAgillity(),
           attribute.getVitality(),
           attribute.getIntelligence());

    cout << "Element: " << element << endl;
    printf("Weapon: %.2f%%\n", weapon.getAttackPercentage());
    printf("Level: %d %d\n", level.getExp(), level.getLvl());
    cout << "Job: " << job << endl;
}

const string &Individual::getJob() const {
    return job;
}

void Individual::setJob(const string &job) {
    Individual::job = job;
}

void Individual::attack(Individual enemy) {

}


