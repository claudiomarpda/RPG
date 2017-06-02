//
// Created by mz on 25/05/17.
//

#ifndef RPG_BATTLECONTROL_H
#define RPG_BATTLECONTROL_H


#include "../model/Individual.h"

class BattleControl {

private:
    bool battleFinished;
    vector<Individual> playerTeam;
    vector<Individual> enemyTeam;

public:
    BattleControl(const vector<Individual> &playerTeam, const vector<Individual> &enemyTeam);

    void setBattleOver(bool battleOver);

    bool isBattleFinished() const;

    static int randomize(int range);

    void start();

    /*Attack*/ void enemyAttack();
};


#endif //RPG_BATTLECONTROL_H
