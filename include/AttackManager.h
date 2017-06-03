//
// Created by mz on 03/06/17.
//

#ifndef RPG_ATTACKCONTROL_H
#define RPG_ATTACKCONTROL_H


#include "Individual.h"

class AttackControl {

public:
    static void managePhysicalAttack(Individual &attacker, Individual &target);

    static void manageMagicalAttack(Individual &attacker, Individual &target);
};


#endif //RPG_ATTACKCONTROL_H
