#include "Hero.h"

Hero::Hero(string hN, int h, int bP){
    heroName = hN;
    health = h;
    basePower = bP;
    // cout << "Hero Constructor created Successfully\n";  //Not needed according to test.cpp, So commented out
}

Hero::~Hero(){
    // cout << "Hero Object destroyed\n";  //Not needed according to test.cpp, So commented out
}

//Getter Functions

string Hero::getName()const{
    return heroName;
}

int Hero::getHealth()const{
    return health;
}

int Hero::getPower()const{
    return basePower;
}

void Hero::takeDamage(double damage){
    health -= damage;

    if(health < 0){   // Health guard logic
        health = 0;
    }
}

bool Hero::operator> (const Hero &other){
    if(this->basePower > other.basePower){   // Comparing base power
        return true;
    }
    else{
        return false;
    }
}

int Hero::operator+ (const Hero &other){
    int temp;
    temp = this->health + other.health;   // Summing total health
    return temp;
}