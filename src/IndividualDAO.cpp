//
// Created by mz on 25/05/17.
//


#include <fstream>
#include <iostream>
#include "../include/IndividualDAO.h"
#include "../include/Mage.h"
#include "../include/Warrior.h"

vector<Individual> IndividualDAO::readPlayers() {
    vector<Individual> playerTeam;
    vector<string> values;

    values = readIndividual(MAGE_FILE);
    playerTeam.push_back(Mage(values));

    values = readIndividual(WARRIOR_FILE);
    playerTeam.push_back(Warrior(values));

    return playerTeam;
}

vector<Individual> IndividualDAO::readEnemies() {
    vector<Individual> enemyTeam;
    vector<string> values;

    values = readIndividual(ENEMY1_FILE);
    enemyTeam.push_back(Individual(values));

    values = readIndividual(ENEMY2_FILE);
    enemyTeam.push_back(Individual(values));

    return enemyTeam;
}

vector<string> IndividualDAO::readIndividual(const string fileName) {
    ifstream in(fileName, ios::in);
    if (!in) {
        cout << "File could not be opened.";
    }

    vector<string> values;
    string value;

    while(!in.eof()) {
        in >> value;
        values.push_back(value);
//        cout << value << " ";
    }

    in.close();
    return values;
}

void IndividualDAO::savePlayers() {

}
