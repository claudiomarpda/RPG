//
// Created by mz on 25/05/17.
//

#include <cstdlib>
#include "../include/BattleControl.h"

/**
 * Generates a random number in the given range.
 */
int BattleControl::randomize(int range) {
    return (rand() % range);
}

void BattleControl::setBattleOver(bool battleOver) {
    BattleControl::battleFinished = battleOver;
}

void BattleControl::start() {
    while (!isBattleFinished()) {
        // run vector
        // perform attack

        /*for (auto &&item :) {
           if(battleControl.battleFinished() {

                break;
           }
        }*/
    }
}

/*Attack*/ void BattleControl::enemyAttack() {
    int target = randomize(/*number of enemies*/ 5);


//   return attack;
}

BattleControl::BattleControl(const vector<Individual> &playerTeam, const vector<Individual> &enemyTeam) :
        playerTeam(playerTeam), enemyTeam(enemyTeam) {
    battleFinished = false;
}

/**
 * Checks if the current battle is over.
 */
bool BattleControl::isBattleFinished() const {
    // checks if there is at least one individual alive in each group
    return battleFinished;
}


