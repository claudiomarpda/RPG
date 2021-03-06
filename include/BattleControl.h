//
// Created by mz on 25/05/17.
//

#ifndef RPG_BATTLECONTROL_H
#define RPG_BATTLECONTROL_H


#include "Individual.h"

/**
 * The whole battle starts and ends here.
 * Implements the mechanic and all the rules for the battle.
 */
class BattleControl {

private:
    vector<Individual *> playerTeam;
    vector<Individual *> enemyTeam;
    Individual *i[5];
    int teamExp;

    bool isBattleFinished() const;

    static int randomize(int range);

    bool isTeamDead(const vector<Individual *> &team) const;

    bool isPlayerTeamDead(const vector<Individual *> &team) const;

    bool isEnemyTeamDead(const vector<Individual *> &team) const;

public:
    BattleControl(const vector<Individual *> &playerTeam, const vector<Individual *> &enemyTeam);

    void start();
};


#endif //RPG_BATTLECONTROL_H
