#ifndef GUILD_H
#define GUILD_H

#include <iostream>
#include <string>

#include "Hero.h"

using namespace std;

class Guild{
private:
    string guildName;
    Hero* roster[15];
    int memberCount;
public:
    //Constructor
    Guild(string gN);
    //Destructor
    ~Guild();

    //Getter Functions
    string getGuildName();

    //Other Member Functions
    int calculateTotalGuildPower();
    void displayGuildStats();

    //Operator Overloading Member Functions
    void operator += (Hero* newHero);
    friend ostream& operator << (ostream &os, const Guild &g); 
};

#endif
