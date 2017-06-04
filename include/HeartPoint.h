//
// Created by Alisson on 25/05/2017.
//

#ifndef RPG_HEARTPOINT_H
#define RPG_HEARTPOINT_H

/**
 * The heart points of an Individual.
 */
class HeartPoint {

private:
    int maxHp;
    int currentHp;
    const static int HP_RATE = 5;

    int calculateMaxHp(int vitality);

public:

    HeartPoint();

    HeartPoint(int vitality);

    int getMaxHp() const;

    void setMaxHp(int maxHp);

    int getCurrentHp() const;

    void setCurrentHp(int currentHp);

    void decrease(int damage);
};


#endif //RPG_HEARTPOINT_H
