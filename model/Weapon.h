//
// Created by amaro on 25/05/2017.
//

#ifndef RPG_WEAPON_H
#define RPG_WEAPON_H

#include <string>

using namespace std;

class Weapon {
private:
    float attackPercentage;

public:
    float getAttackPercentage() const;

    void setAttackPercentage(float attackPercentage);

    float calculateAttack(float attackPercentage);

};


#endif //RPG_WEAPON_H
