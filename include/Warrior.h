//
// Created by mz on 02/06/17.
//

#ifndef RPG_WARRIOR_H
#define RPG_WARRIOR_H


#include "Individual.h"

const static int STR_LEVEL_UP = 2;
const static int AGI_LEVEL_UP = 2;
const static int VIT_LEVEL_UP = 2;

class Warrior : public Individual {

public:
    Warrior(const vector<string> &values);

    void performAttack(Individual &target) override;

    void levelUp() override;
};


#endif //RPG_WARRIOR_H
