//
// Created by amaro on 25/05/2017.
//

#ifndef RPG_WEAPON_H
#define RPG_WEAPON_H

#include <string>

using namespace std;

/**
 * Weapon increases the attack power of Individuals in percentage.
 */
class Weapon {

private:
    float attackPercentage;

public:

    Weapon();

    Weapon(float attackPercentage);

    float getAttackPercentage() const;

    void setAttackPercentage(float attackPercentage);

    float calculateAttack() const;

};


#endif //RPG_WEAPON_H
