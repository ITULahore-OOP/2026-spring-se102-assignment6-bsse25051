#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <string>

using namespace std;

class Hero{
private:  //Attributes set to private
    string heroName;
    int health;
    int basePower;
public:
    //Constructor to initialize name, health, and power
    Hero(string hN, int h, int bP);
    //Destructor
    ~Hero();

    //Getter Functions
    string getName()const;
    int getHealth()const;
    int getPower()const;

    //Other Member Functions
    void takeDamage(double damage);
    bool operator > (const Hero &);  // Overloading > to compare hero strength
    int operator + (const Hero &);  // Overloading + to calculate combined vitality
};

#endif
