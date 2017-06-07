//
// Created by mz on 25/05/17.
//

#ifndef RPG_INDIVIDUALDAO_H
#define RPG_INDIVIDUALDAO_H

#include <string>
#include "Individual.h"

using namespace std;

const static string MAGE_FILE = "mage.rpg";
const static string PRIEST_FILE = "priest.rpg";
const static string WARRIOR_FILE = "warrior.rpg";
const static string ENEMY1_FILE = "enemy1.rpg";
const static string ENEMY2_FILE = "enemy2.rpg";
const static string ENEMY3_FILE = "enemy3.rpg";

/**
 * Handles the persistence of individuals in files.
 * The data are read at the beginning and written(updated) in the end.
 */
class IndividualDAO {

private:
    static void writeIndividual(const string fileName, Individual *individual);

    static vector<string> readIndividual(const string fleName);

public:
    static void writePlayers(const vector<Individual *> playerTeam);

    static vector<Individual *> readPlayers();

    static vector<Individual *> readEnemies();

};


#endif //RPG_INDIVIDUALDAO_H
