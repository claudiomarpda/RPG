//
// Created by mz on 25/05/17.
//

#ifndef RPG_BATTLECONTROL_H
#define RPG_BATTLECONTROL_H


#include "Individual.h"

class BattleControl {

private:
    vector<Individual> playerTeam;
    vector<Individual> enemyTeam;

    int teamExp;

    bool isBattleFinished() const;

    static int randomize(int range);

    bool isTeamDead(const vector<Individual> &team) const;

    bool isPlayerTeamDead(const vector<Individual> &team) const;

    bool isEnemyTeamDead(const vector<Individual> &team) const;

public:
    BattleControl(vector<Individual> &playerTeam, vector<Individual> &enemyTeam);

    void start();

    /*Attack*/ void enemyAttack();


};


#endif //RPG_BATTLECONTROL_H
