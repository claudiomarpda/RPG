//
// Created by mz on 07/06/17.
//

#include <iostream>
#include "../include/Element.h"

const string Element::NEUTRAL = "Neutral";
const string Element::FIRE = "Fire";
const string Element::BLIZZARD = "Blizzard";
const string Element::WIND = "Wind";
const string Element::EARTH = "Earth";

/**
 * Calculates a percentage according to elements comparison
 */
float Element::compare(string element1, string element2) {
    cout << "\nElement1 " << element1 << ", " << "Element2 " << element2 << endl;
    if (element1.compare(FIRE) == 0) {
        if (element2.compare(FIRE) == 0) {
            return 1;
        } else if (element2.compare(BLIZZARD) == 0) {
            return 1;
        } else if (element2.compare(WIND) == 0) {
            return 1;
        } else if (element2.compare(EARTH) == 0) {
            cout << "\nopa........" << endl;
            return 0.5f;
        }
    }
}

