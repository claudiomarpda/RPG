//
// Created by Alisson on 25/05/2017.
//

#ifndef RPG_ATTRIBUTE_H
#define RPG_ATTRIBUTE_H

#include <string>
#include <vector>

using namespace std;

/**
 * The attributes of any individual that are used to calculate HeartPoint, Defense, Attack
 * and several battle mechanic.
 */
class Attribute {

private:
    int strength;
    int agility;
    int vitality;
    int intelligence;

public:

    Attribute();

    Attribute(int strength, int agility, int vitality, int intelligence);

    int getStrength() const;

    void setStrength(int strength);

    int getAgility() const;

    void setAgility(int agility);

    int getVitality() const;

    void setVitality(int vitality);

    int getIntelligence() const;

    void setIntelligence(int intelligence);
};


#endif //RPG_ATTRIBUTE_H
