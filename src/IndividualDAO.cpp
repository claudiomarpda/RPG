//
// Created by mz on 25/05/17.
//


#include <fstream>
#include <iostream>
#include "../include/IndividualDAO.h"
#include "../include/Mage.h"
#include "../include/Warrior.h"
#include "../include/LoggerConfig.h"
#include "../include/Log.h"

vector<Individual> IndividualDAO::readPlayers() {
    if(Log::ON) {
        Log::write("- Player team -");
    }
    vector<Individual> playerTeam;
    vector<string> values;

    values = readIndividual(MAGE_FILE);
    Mage mage(values);
    playerTeam.push_back(mage);

    if(Log::ON) {
        Log::write(mage.logString());
    }

    values = readIndividual(WARRIOR_FILE);
    Warrior warrior(values);
    playerTeam.push_back(warrior);

    if(Log::ON) {
        Log::write(warrior.logString());
    }

    return playerTeam;
}

vector<Individual> IndividualDAO::readEnemies() {
    if(Log::ON) {
        Log::write("- Enemy team -");
    }
    vector<Individual> enemyTeam;
    vector<string> values;

    values = readIndividual(ENEMY1_FILE);
    Individual enemy1(values);
    enemyTeam.push_back(enemy1);

    if(Log::ON) {
        Log::write(enemy1.logString());
    }

    values = readIndividual(ENEMY2_FILE);
    Individual enemy2(values);
    enemyTeam.push_back(enemy2);

    if(Log::ON) {
        Log::write(enemy2.logString());
    }

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
