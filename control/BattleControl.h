//
// Created by mz on 25/05/17.
//

#ifndef RPG_BATTLECONTROL_H
#define RPG_BATTLECONTROL_H


class BattleControl {

private:
    bool battleOver;
    // vector of players and enemies

public:
    BattleControl();

    void setBattleOver(bool battleOver);

    bool isBattleOver() const;

    static int randomize(int range);

    void start();

    /*Attack*/ void enemyAttack();
};


#endif //RPG_BATTLECONTROL_H
