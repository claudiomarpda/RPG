//
// Created by mz on 01/06/17.
//

#ifndef RPG_SKILL_H
#define RPG_SKILL_H

#include <string>

using namespace std;

class Skill {

protected:
    string name;
    int spConsumption;
    string element;

public:

    static const string FIRE;
    static const string BLIZZARD;
    static const string WIND;
    static const string EARTH;

    Skill(const string &name, int spConsumption, const string &element);

    const string &getName() const;

    void setName(const string &name);

    int getSpConsumption() const;

    void setSpConsumption(int spConsumption);

    const string &getElement() const;

    void setElement(const string &element);

};

#endif //RPG_SKILL_H
