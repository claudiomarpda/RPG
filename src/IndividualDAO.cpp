//
// Created by mz on 25/05/17.
//


#include <fstream>
#include "../include/IndividualDAO.h"
#include "../include/Mage.h"
#include "../include/Warrior.h"
#include "../include/Log.h"
#include "Enemy.h"

vector<Individual *> IndividualDAO::readPlayers() {
    if (Log::ON) {
        Log::write("- Player team -");
    }
    vector<Individual *> playerTeam;
    vector<string> values;

    values = readIndividual(MAGE_FILE);
    Mage *mage = new Mage(values);
    playerTeam.push_back((Individual *) mage);

    if (Log::ON) {
        Log::write(mage->logString());
    }

    values = readIndividual(WARRIOR_FILE);
    Warrior *warrior = new Warrior(values);
    playerTeam.push_back((Individual *) warrior);

    if (Log::ON) {
        Log::write(warrior->logString());
    }

    return playerTeam;
}

vector<Individual *> IndividualDAO::readEnemies() {
    if (Log::ON) {
        Log::write("- Enemy team -");
    }
    vector<Individual *> enemyTeam;
    vector<string> values;

    values = readIndividual(ENEMY1_FILE);
    Enemy *enemy1 = new Enemy(values);
    enemyTeam.push_back((Individual *) enemy1);

    if (Log::ON) {
        Log::write(enemy1->logString());
    }

    values = readIndividual(ENEMY2_FILE);
    Enemy *enemy2 = new Enemy(values);
    enemyTeam.push_back((Individual *) enemy2);

    if (Log::ON) {
        Log::write(enemy2->logString());
    }

    return enemyTeam;
}

vector<string> IndividualDAO::readIndividual(const string fileName) {
    ifstream in(fileName, ios::in);
    if (!in) {
        if (Log::ON) {
            Log::write("File could not be opened");
            exit(1);
        }
    }

    vector<string> values;
    string value;

    while (!in.eof()) {
        in >> value;
        values.push_back(value);
    }

    in.close();
    return values;
}


void IndividualDAO::writePlayers(vector<Individual *> playerTeam) {
    if (Log::ON) {
        Log::write("Saving player team to file...");
    }
    writeIndividual(MAGE_FILE, playerTeam.at(0));
    writeIndividual(WARRIOR_FILE, playerTeam.at(1));

    if (Log::ON) {
        Log::write("Save successful");
    }
}

void IndividualDAO::writeIndividual(const string fileName, Individual *individual) {
    ofstream out(fileName, ios::out);
    if (!out) {
        if (Log::ON) {
            Log::write("File could not be opened");
            exit(1);
        }
    }

    string attributes = to_string(individual->getAttribute().getStrength()) + " " +
                        to_string(individual->getAttribute().getAgillity()) + " " +
                        to_string(individual->getAttribute().getVitality()) + " " +
                        to_string(individual->getAttribute().getIntelligence());
    out << attributes << endl;
    out << individual->getJob() << endl;

    string level_exp = to_string(individual->getLevel().getLvl()) + " " +
                       to_string(individual->getLevel().getExp()) + " " +
                       to_string(individual->getLevel().getNextLvl());

    out << level_exp << endl;
    out << individual->getElement() << endl;
    out << individual->getWeapon().getAttackPercentage() << endl;

}
