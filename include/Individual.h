//
// Created by mz on 25/05/17.
//

#ifndef RPG_INDIVIDUAL_H
#define RPG_INDIVIDUAL_H

#include "HeartPoint.h"
#include "SpellPoint.h"
#include "Attribute.h"
#include "Weapon.h"
#include "Level.h"
#include "Skill.h"
#include <string>
#include <vector>

using namespace std;

const static string WARRIOR = "Warrior";
const static string MAGE = "Mage";

class Individual {

private:
    HeartPoint hp;
    SpellPoint sp;
    Attribute attribute;
    string element;
    Weapon weapon;
    Level level;
    vector<Skill> skills;
    string job;

public:
//    const static string MAGE = "Mage";

    Individual(vector<string> values);

    const HeartPoint &getHp() const;

    void setHp(const HeartPoint &hp);

    const SpellPoint &getSp() const;

    void setSp(const SpellPoint &sp);

    const Attribute &getAttribute() const;

    void setAttribute(const Attribute &attribute);

    const string &getElement() const;

    void setElement(const string &element);

    const Weapon &getWeapon() const;

    void setWeapon(const Weapon &weapon);

    const Level &getLevel() const;

    void setLevel(const Level &level);

    const vector<Skill> &getSkills() const;

    void setSkills(const vector<Skill> &skills);

    void print(ofstream &outLogger) const;

    const string &getJob() const;

    void setJob(const string &job);

    virtual void attack(Individual enemy);

    const string logString() const;
};


#endif //RPG_INDIVIDUAL_H
