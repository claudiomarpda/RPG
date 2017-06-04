//
// Created by mz on 03/06/17.
//

#ifndef RPG_ATTACKCONTROL_H
#define RPG_ATTACKCONTROL_H


#include "Individual.h"

/**
 * Calculates the results of attacks in opponents. When an attack is performed,
 * its power is calculated and compared with the target defense, which can
 * modify the individuals state, e.g, decrease hp.
 */
class AttackControl {

public:
    static void managePhysicalAttack(Individual &attacker, Individual &target);

    static void manageMagicalAttack(Individual &attacker, Individual &target);
};


#endif //RPG_ATTACKCONTROL_H
