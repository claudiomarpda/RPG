//
// Created by mz on 01/06/17.
//

#ifndef RPG_ELEMENT_H
#define RPG_ELEMENT_H

#include <string>

using namespace std;

class Element {

public:
    static const string NEUTRAL;
    static const string FIRE;
    static const string BLIZZARD;
    static const string WIND;
    static const string EARTH;

    static float compare(string element1, string element2);
};

#endif //RPG_ELEMENT_H
