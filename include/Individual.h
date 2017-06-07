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

/**
 * Abstract class used as base for all jobs(classes) of the game.
 */
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

    Individual();

    Individual(vector<string> values);

    HeartPoint &getHp();

    void setHp(const HeartPoint &hp);

    const SpellPoint &getSp() const;

    void setSp(const SpellPoint &sp);

    const Attribute &getAttribute() const;

    void setAttribute(const Attribute &attribute);

    const string &getElement() const;

    void setElement(const string &element);

    const Weapon &getWeapon() const;

    void setWeapon(const Weapon &weapon);

    Level &getLevel();

    void setLevel(const Level &level);

    const vector<Skill> &getSkills() const;

    void setSkills(const vector<Skill> &skills);

    const string &getJob() const;

    void setJob(const string &job);


    const string logString() const;

    void addExp(int exp);

    virtual void performAttack(Individual &target);

    void performMagicalSkill(Individual &target);

    /**
     * Allows level up bonus in a specific way in each concrete class.
     */
    virtual void levelUp() = 0;
};


#endif //RPG_INDIVIDUAL_H
