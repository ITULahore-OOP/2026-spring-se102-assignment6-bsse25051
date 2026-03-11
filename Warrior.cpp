#include "Warrior.h"

//Inititalizing Constructor
Warrior::Warrior(string hN, int h, int bP, int aR): Hero(hN, h, bP){
    armorRating = aR;
}

//Getter Function

int Warrior::getArmor(){
    return armorRating;
}

//Other function
int Warrior::calculateEffectiveHealth(){    // Calculate health including armor bonus: Health + (Armor * 2)
    return (getHealth() + (armorRating * 2));
}