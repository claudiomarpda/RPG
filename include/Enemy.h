//
// Created by mz on 04/06/17.
//

#ifndef RPG_ENEMY_H
#define RPG_ENEMY_H


#include "Individual.h"

class Enemy : public Individual{
public:
    Enemy(const vector<string> &values);

    void levelUp() override;
};


#endif //RPG_ENEMY_H
