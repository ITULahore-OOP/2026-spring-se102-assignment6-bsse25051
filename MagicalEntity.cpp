#include "MagicalEntity.h"

//Initializing Constructor
MagicalEntity::MagicalEntity(int mP, int sP){
    manaPool = mP;
    spellPower = sP;
    // cout << "Magical Entity Initialized\n";  //not needed
}

//Destructor 
MagicalEntity::~MagicalEntity(){
    cout << "Magical Entity object destroyed successfully\n";
}

//Getter Functions
int MagicalEntity::getMana()const{
    return manaPool;
}

int MagicalEntity::getSpellPower()const{
    return spellPower;
}