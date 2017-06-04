//
// Created by mz on 25/05/17.
//

#include <fstream>
#include "../include/Individual.h"
#include "../include/AttackManager.h"

Individual::Individual() {}

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
    // next level
    int nextLevel = stoi(values.at(7));
    // element
    string element = (string) values.at(8);
    // weapon
    float weaponAttack = stoi(values.at(9));

    setHp(HeartPoint(vit));
    setSp(SpellPoint(intel));
    setAttribute(Attribute(str, agi, vit, intel));
    setElement(element);
    setWeapon(Weapon(weaponAttack));
    setLevel(Level(level, exp, nextLevel));
    setJob(job);
}

HeartPoint &Individual::getHp() {
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

Level &Individual::getLevel() {
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

const string &Individual::getJob() const {
    return job;
}

void Individual::setJob(const string &job) {
    Individual::job = job;
}

void Individual::performAttack(Individual &target) {
    AttackControl::managePhysicalAttack(*this, target);
}

const string Individual::logString() const {
    string log = "";

    log += job + "\n";
    log += "Current HP: " + to_string(hp.getCurrentHp()) + " Max HP: " + to_string(hp.getMaxHp()) + "\n";
    log += "Current SP: " + to_string(sp.getCurrentSp()) + " Max SP: " + to_string(sp.getMaxSp()) + "\n";

    log += "Attributes: " +
           to_string(attribute.getStrength()) + " " +
           to_string(attribute.getAgility()) + " " +
           to_string(attribute.getVitality()) + " " +
           to_string(attribute.getIntelligence()) + "\n";

    log += "Element: " + element + "\n";
    log += "Weapon: " + to_string(weapon.getAttackPercentage()) + "\n";
    log += "Level: " + to_string(level.getLvl()) + " EXP: " + to_string(level.getExp()) + "\n";

    return log;
}

void Individual::addExp(int exp) {
    if (getLevel().addExp(exp) == Level::LEVEL_UP) {
        levelUp();
    }
}






