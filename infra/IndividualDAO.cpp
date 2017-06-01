//
// Created by mz on 25/05/17.
//


#include <fstream>
#include <iostream>
#include "IndividualDAO.h"

void IndividualDAO::readPlayers() {
    readIndividual(MAGE_FILE);
}

void IndividualDAO::readEnemies() {
    readIndividual(MONSTER_1);
}

void IndividualDAO::readIndividual(const string fileName) {
    ifstream in(fileName, ios::in);
    if (!in) {
        cout << "File could not be opened.";
    }

    string value;
    for(int i = 0; i < 4; i++) {
        getline(in, value, ',');
        cout << value << " ";
    }

    in.close();
}

void IndividualDAO::savePlayers() {

}
