#include <iostream>
#include <fstream>
#include "include/IndividualDAO.h"
#include "include/Log.h"
#include "include/BattleControl.h"

int main() {
    std::cout << "Hello, Player!" << std::endl;

    if (Log::ON) {
        Log::open();
    }

    vector<Individual> playerTeam = IndividualDAO::readPlayers();
    vector<Individual> enemyTeam = IndividualDAO::readEnemies();

    BattleControl battleControl(playerTeam, enemyTeam);
    battleControl.start();

    IndividualDAO::writePlayers(playerTeam);

    if (Log::ON) {
        Log::close();
    }

    return 0;
}