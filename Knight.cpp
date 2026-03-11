#include "Knight.h"

//Initialiazing Constructor
Knight::Knight(string hN, int h, int bP, int aR, int cB): Warrior(hN, h, bP, aR){
    chargeBonus = cB;
}

//Getter Function

int Knight::getChargeBonus(){
    return chargeBonus;
}

int Knight::calculateBurstDamage(){  // Calculate damage: Base Power + Charge Bonus
    return getPower() + chargeBonus;
}

