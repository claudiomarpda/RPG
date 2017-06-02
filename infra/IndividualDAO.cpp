//
// Created by mz on 25/05/17.
//


#include <fstream>
#include <iostream>
#include "IndividualDAO.h"

void IndividualDAO::readPlayers() {
    vector<string> values = readIndividual(MAGE_FILE);

     Individual individual(values);
    individual.print();
}

void IndividualDAO::readEnemies() {
    readIndividual(MONSTER_1);
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
