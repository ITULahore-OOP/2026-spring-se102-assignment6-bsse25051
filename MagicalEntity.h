#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include <iostream>
#include <string>

using namespace std;

class MagicalEntity{
private:  //Attributes set to private 
    int manaPool;
    int spellPower;
public:
    //Constructor
    MagicalEntity(int mP, int sP);
    //Destructor
    ~MagicalEntity();

    //Getter Function
    int getMana()const;
    int getSpellPower()const;
};

#endif
