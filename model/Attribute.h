//
// Created by Alisson on 25/05/2017.
//

#ifndef RPG_ATTRIBUTE_H
#define RPG_ATTRIBUTE_H


class Attribute {
private:
    int strength;
    int agillity;
    int vitality;
    int intelligence;
public:
    Attribute(int strength, int agillity, int vitality, int intelligence);
    Attribute();
    int getStrength() const;
    void setStrength(int strength);
    int getAgillity() const;
    void setAgillity(int agillity);
    int getVitality() const;
    void setVitality(int vitality);
    int getIntelligence() const;
    void setIntelligence(int intelligence);

};


#endif //RPG_ATTRIBUTE_H
