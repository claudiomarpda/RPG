//
// Created by mz on 02/06/17.
//

#ifndef RPG_MAGE_H
#define RPG_MAGE_H


#include "Individual.h"

const static int INT_LEVEL_UP = 3;

class Mage : public Individual {

public:
    Mage(const vector<string> &values);

    void performAttack(Individual &target) override;

    void levelUp() override;
};


#endif //RPG_MAGE_H
