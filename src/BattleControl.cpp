//
// Created by mz on 25/05/17.
//

#include <cstdlib>
#include <iostream>
#include "../include/BattleControl.h"
#include "../include/Log.h"

BattleControl::BattleControl(vector<Individual> &playerTeam, vector<Individual> &enemyTeam) : playerTeam(
        playerTeam), enemyTeam(enemyTeam) {
    teamExp = 0;
}

/**
 * Generates a random number in the given range.
 */
int BattleControl::randomize(int range) {
    return (rand() % range);
}

void BattleControl::start() {
    if (Log::ON) {
        Log::write("- Battle begin -");
    }

    while (!isBattleFinished()) {

        for (auto &p : playerTeam) {
            Individual *target;

            int index = randomize(enemyTeam.size());
            target = &enemyTeam.at(index);

            p.performAttack(*target);
            if (target->getHp().getCurrentHp() <= 0) {
                Log::write(target->getJob() + " is dead #");
                // add exp from defeated enemy
                teamExp += target->getLevel().getExp();
                enemyTeam.erase(enemyTeam.begin() + index);
                if (isBattleFinished()) {
                    break;
                }
            }
        }

        for (auto &e  : enemyTeam) {
            Individual *target;
            int index = randomize(playerTeam.size());
            target = &playerTeam.at(index);

            e.performAttack(*target);
            if (target->getHp().getCurrentHp() <= 0) {
                Log::write(target->getJob() + " is dead");
                enemyTeam.erase(enemyTeam.begin() + index);
                if (isBattleFinished()) {
                    break;
                }
            }
        }
    }

    if (Log::ON) {
        Log::write("- Battle is over -");
    }
    if (isPlayerTeamDead(playerTeam)) {
        if(Log::ON) {
            Log::write("--- You LOSE ---");
        }
    } else {
        // add exp to all team members
        for (auto &p: playerTeam) {
            p.getLevel().addExp(teamExp);
        }
        if(Log::ON) {
            Log::write("--- You WIN ---");
            Log::write("Exp gained " + to_string(teamExp) + " EXP");
        }
    }

}

/*Attack*/ void BattleControl::enemyAttack() {
    int target = randomize(/*number of enemies*/ 5);


//   return attack;
}


/**
 * Checks if the is at least one individual alive in each team.
 */
bool BattleControl::isBattleFinished() const {
    return isEnemyTeamDead(enemyTeam) || isPlayerTeamDead(playerTeam);
}

/**
 * Checks if there is at least one individual alive in a team.
 */
bool BattleControl::isTeamDead(const vector<Individual> &team) const {
    for (auto t : team) {
        if (t.getHp().getCurrentHp() > 0) {
            return false;
        }
    }
    return true;
}

bool BattleControl::isPlayerTeamDead(const vector<Individual> &team) const {
    return isTeamDead(team);
}

bool BattleControl::isEnemyTeamDead(const vector<Individual> &team) const {
    return isTeamDead(team);
}

