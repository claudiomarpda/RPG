//
// Created by Alisson on 25/05/2017.
//

#ifndef RPG_SPELLPOINT_H
#define RPG_SPELLPOINT_H

/**
 * The spell points of an Individual.
 */
class SpellPoint {

private:
    int maxSp;
    int currentSp;
    const static int SP_RATE = 10;

public:
    SpellPoint(int intelligence);

    SpellPoint();

    int getMaxSp() const;

    void setMaxSp(int maxSp);

    int getCurrentSp() const;

    void setCurrentSp(int currentSp);

    int calculateMaxSp(int intelligence);
};


#endif //RPG_SPELLPOINT_H
