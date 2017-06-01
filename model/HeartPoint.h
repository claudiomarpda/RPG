//
// Created by Alisson on 25/05/2017.
//

#ifndef RPG_HEARTPOINT_H
#define RPG_HEARTPOINT_H


class HeartPoint {

private:
    int maxHp;
    int currentHp;
    int variableHp = 5;
public:
    HeartPoint(int vitality);
    HeartPoint();
    int getMaxHp() const;
    void setMaxHp(int maxHp);
    int getCurrentHp() const;
    void setCurrentHp(int currentHp);
    int calculateMaxHp(int vitality);
};


#endif //RPG_HEARTPOINT_H
