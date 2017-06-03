//
// Created by mz on 02/06/17.
//

#ifndef RPG_WARRIOR_H
#define RPG_WARRIOR_H


#include "Individual.h"

class Warrior : public Individual {

public:
    Warrior(const vector<string> &values);

    void attack(Individual enemy) override;
};


#endif //RPG_WARRIOR_H
