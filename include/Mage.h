//
// Created by mz on 02/06/17.
//

#ifndef RPG_MAGE_H
#define RPG_MAGE_H


#include "Individual.h"

class Mage : public Individual {

public:
    Mage(const vector<string> &values);

    void attack(Individual enemy) override;
};


#endif //RPG_MAGE_H
