//
// Created by amaro on 25/05/2017.
//

#ifndef RPG_LEVEL_H
#define RPG_LEVEL_H


class Level {

private:
    int nextLvl = 10;
    int exp = 0;
    int lvl = 1;
    const static int MIN = 1;
    const static int MAX = 50;

public:

    Level();

    Level(int exp, int lvl);

    int getExp() const;

    void setExp(int exp);

    int getLvl() const;

    void setLvl(int lvl);

    int getNextLvl() const;

    void setNextLvl(int nextLvl);

    static const int getMIN();

    static const int getMAX();

    int levelUp(int nextLvl, int lvl);

    void addExp(int exp);

};


#endif //RPG_LEVEL_H
