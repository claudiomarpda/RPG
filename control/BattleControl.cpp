//
// Created by mz on 25/05/17.
//

#include <cstdlib>
#include "BattleControl.h"

/**
 * Generates a random number in the given range.
 */
int BattleControl::randomize(int range) {
    return (rand() % range);
}

BattleControl::BattleControl() {
    battleOver = false;
}

/**
 * Checks if the current battle is over.
 * @return true if over, else false.
 */
bool BattleControl::isBattleOver() const {
    // checks if there is at least one individual alive in each group
    return battleOver;
}

void BattleControl::setBattleOver(bool battleOver) {
    BattleControl::battleOver = battleOver;
}

void BattleControl::start() {
    while (!isBattleOver()) {
        // run vector
        // perform attack

        /*for (auto &&item :) {
           if(battleControl.battleOver() {

                break;
           }
        }*/
    }
}

/*Attack*/ void BattleControl::enemyAttack() {
    int target = randomize(/*number of enemies*/ 5);


//   return attack;
}

