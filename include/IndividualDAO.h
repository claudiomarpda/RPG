//
// Created by mz on 25/05/17.
//

#ifndef RPG_INDIVIDUALDAO_H
#define RPG_INDIVIDUALDAO_H

#include <string>
#include "Individual.h"
#include "InfraException.h"

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
    static void writeIndividual(const string fileName, Individual *individual) throw(InfraException);

    static vector<string> readIndividual(const string fleName) throw(InfraException);

public:
    static void writePlayers(const vector<Individual *> playerTeam) throw(InfraException);

    static vector<Individual *> readPlayers()throw(InfraException);

    static vector<Individual *> readEnemies() throw(InfraException);

};


#endif //RPG_INDIVIDUALDAO_H
