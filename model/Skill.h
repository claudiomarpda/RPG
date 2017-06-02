//
// Created by mz on 01/06/17.
//

#ifndef RPG_SKILL_H
#define RPG_SKILL_H

#include <string>

using namespace std;

class Skill {

private:
    string name;
    int spConsumption;
    string element;

public:
    Skill(const string &name, int spConsumption, const string &element);

    const string &getName() const;

    void setName(const string &name);

    int getSpConsumption() const;

    void setSpConsumption(int spConsumption);
};


#endif //RPG_SKILL_H
