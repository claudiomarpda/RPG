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

class IndividualDAO {

public:
    void savePlayers(/*vector<Individual> i*/);

    static vector<Individual> readPlayers();

    static vector<Individual> readEnemies();

    static vector<string> readIndividual(const string fleName);
};


#endif //RPG_INDIVIDUALDAO_H
