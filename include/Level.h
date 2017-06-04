//
// Created by amaro on 25/05/2017.
//

#ifndef RPG_LEVEL_H
#define RPG_LEVEL_H

/**
 * The level of an Individual and its experience.
 */
class Level {

private:
    int nextLvl;
    int exp;
    int lvl;

public:

    const static int LEVEL_UP = 1;
    const static int NEXT_LEVEL_RATE = 2;

    Level();

    Level(int lvl, int exp, int nextLevel);

    int getExp() const;

    void setExp(int exp);

    int getLvl() const;

    void setLvl(int lvl);

    int getNextLvl() const;

    void setNextLvl(int nextLvl);

    void levelUp(int remainingExp);

    int addExp(int exp);

};


#endif //RPG_LEVEL_H
