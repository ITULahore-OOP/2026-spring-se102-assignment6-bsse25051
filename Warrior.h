#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>

#include "Hero.h"

using namespace std;

class Warrior: public Hero{  //Inheriting the Hero Class
private:  //Attribute set to private
    int armorRating;
public:
    //Constructor
    Warrior(string hN, int h, int bP, int aR);

    //Getter Function
    int getArmor();
    
    //Other Member FUnction
    int calculateEffectiveHealth();
};

#endif