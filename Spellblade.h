#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include <iostream>
#include <string>

#include "MagicalEntity.h"
#include "Warrior.h"

using namespace std;

class Spellblade: public MagicalEntity, public Warrior{  // Inherits from both Warrior and MagicalEntity
public:
    Spellblade(string hN, int h, int bP, int mP, int sP, int aR);

    //Member Functions
    int calculateHybridDamage();
};

#endif
