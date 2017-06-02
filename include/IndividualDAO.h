//
// Created by mz on 25/05/17.
//

#ifndef RPG_INDIVIDUALDAO_H
#define RPG_INDIVIDUALDAO_H

#include <string>
#include "Individual.h"

using namespace std;

const string MAGE_FILE = "mage.rpg";
const string PRIEST_FILE = "priest.rpg";
const string WARRIOR_FILE = "warrior.rpg";
const string MONSTER_1 = "enemy1.rpg";
const string MONSTER_2 = "enemy2.rpg";

class IndividualDAO {

public:
    void savePlayers(/*vector<Individual> i*/);

    /*vector<Individual>*/ void readPlayers();

    /*vector<Individual>*/ void readEnemies();

    vector<string> readIndividual(const string fleName);
};


#endif //RPG_INDIVIDUALDAO_H
