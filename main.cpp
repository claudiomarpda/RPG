#include <iostream>
#include <fstream>
#include "include/IndividualDAO.h"
#include "include/Log.h"
#include "include/BattleControl.h"
#include "include/InfraException.h"

int main() {
    std::cout << "Hello, Player!" << std::endl;

    if (Log::ON) {
        cout << "Log mode: ON" << endl;
        cout << "Saving data to " << LOG_FILE_NAME << "... " << endl;
        Log::open();
    }

    vector<Individual *> playerTeam;
    vector<Individual *> enemyTeam;

    try {
        playerTeam = IndividualDAO::readPlayers();
        enemyTeam = IndividualDAO::readEnemies();
    }
    catch (InfraException e) {
        if (Log::ON) {
            Log::write(e.what());
        }
        cout << "Exception occurred. Check log file." << endl;
        exit(1);
    }

    BattleControl battleControl(playerTeam, enemyTeam);
    battleControl.start();

    IndividualDAO::writePlayers(playerTeam);

    if (Log::ON) {
        Log::close();
        cout << "Log finished" << endl;
    }

    return 0;
}