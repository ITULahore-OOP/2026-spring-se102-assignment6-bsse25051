#include "Spellblade.h"

//Constructor
Spellblade::Spellblade(string hN, int h, int bP, int mP, int sP, int aR): MagicalEntity(mP, sP), Warrior(hN, h, bP, aR){
    // cout << "Spellblade Initialized Successfully\n";   //Not needed
}

//Other Member Function
int Spellblade::calculateHybridDamage(){  // Combine base power and spell power
    return (getPower() + getSpellPower());
}