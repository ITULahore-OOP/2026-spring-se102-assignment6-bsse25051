#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include <string>

#include "Warrior.h"

using namespace std;

class Knight: public Warrior{
private: //Attribute set to private
    int chargeBonus;
public:
    //Constructor
    Knight(string hN, int h, int bP, int aR, int cB);

    //Getter Functions
    int getChargeBonus();

    //Other Member Functions
    int calculateBurstDamage();
};

#endif
