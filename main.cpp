#include <iostream>
#include <string>
#include <vector>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main(){

    string gName;
    cout << "\n==========================================\n";
    cout << "Welcome! Enter the name of your new Guild: ";    //Inputs a Name from User
    getline(cin ,gName);

    Guild myGuild(gName);
    int choice;

    do{   //Menu for Assignment 
        cout << "\n==========================================\n";
        cout << "     ELDORIA GUILD MANAGEMENT SYSTEM      \n";
        cout << "==========================================\n";
        cout << "1. Display Guild Status\n";
        cout << "2. Recruit a Warrior\n";
        cout << "3. Recruit a Knight\n";
        cout << "4. Recruit a Spellblade\n";
        cout << "5. Compare Two Heroes Power\n";
        cout << "6. Calculate Combined Vitality\n";
        cout << "0. Exit and Disband Guild\n";
        cout << "\nEnter your choice (0 - 6): ";
        cin >> choice;

        //Edge Case for Handling Errors of Crashing if other than integer is input ( like if any character or string is input)
         if(!cin>>choice){  
            cout << "\n\tInvalid Choice! Please enter an Integer choice (0 - 6)\n";
            cin.clear();
            cin.ignore(1000, '\n');
            choice = -1;
        }

        else if(choice == 1){
            cout << "\n--- Current Guild Info ---\n";
            myGuild.displayGuildStats();
            cout << "\n--- Detailed Roster ---\n";
            cout << myGuild; //Overloaded operator being used in this
        }

        else if(choice == 2){  //For recruiting Warrior
            string name;
            int hp, power, armor;

            cout << "Enter Warrior Name: ";
            cin >> name;

            cout << "Enter Warrior Health: ";
            cin >> hp;

            cout << "Enter Warrior Power: ";
            cin >> power;

            cout << "Enter Warrior Armor: ";
            cin >> armor;

            myGuild +=  new Warrior(name, hp, power, armor);
            cout << "\nWarrior recruited\n";
        }

        else if(choice == 3){  //For recruiting Knight
            string name;
            int hp, power, armor, bonus;

            cout << "Enter Warrior Name: ";
            cin >> name;

            cout << "Enter Warrior Health: ";
            cin >> hp;

            cout << "Enter Warrior Power: ";
            cin >> power;

            cout << "Enter Warrior Armor: ";
            cin >> armor;

            cout << "Enter Charge Bonus: ";
            cin >> bonus;

            myGuild +=  new Knight(name, hp, power, armor, bonus);
            cout << "\nKnight recruited\n";
        }

        else if(choice == 4){  //For recruiting Spellblade
            string name;
            int hp, power, armor, mana, spell;

            cout << "Enter Warrior Name: ";
            cin >> name;

            cout << "Enter Warrior Health: ";
            cin >> hp;

            cout << "Enter Warrior Power: ";
            cin >> power;

            cout << "Enter Warrior Armor: ";
            cin >> armor;

            cout << "Enter Mana: ";
            cin >> mana;

            cout << "Enter Spell Power: ";
            cin >> spell;

            myGuild +=  new Spellblade(name, hp, power, armor, mana, spell);
            cout << "\nSpellblade recruited\n";
        }

        else if(choice == 5){  //Comparing the Heroes //Operator function being used
            string n1, n2;
            int p1, p2;

            cout << "\nEnter Name for Hero 1: "; 
            cin >> n1;
            cout << "Enter Power for Hero 1: ";
            cin >> p1;

            cout << "\nEnter Name for Hero 2: "; 
            cin >> n2;
            cout << "Enter Power for Hero 2: ";
            cin >> p2;

            Hero h1(n1, 100, p1);
            Hero h2(n2, 100, p2);

            if (h1 > h2)
                cout << "\n=== " << h1.getName() << " is stronger than " << h2.getName() << "!" << endl;
            else
                cout << "\n=== " << h2.getName() << " is stronger or equal!" << endl;
        }

        else if(choice == 6){ //Combining the vitality
            int hp1, hp2;

            cout << "\nEnter Health of Hero 1: ";
            cin >> hp1;

            cout << "\nEnter Health of Hero 2: ";
            cin >> hp2;
            
            Hero h1("H1", hp1, 10);
            Hero h2("H2", hp2, 10);

            cout << "\n=== Combined Vitality: " << (h1 + h2) << endl;
        }

        else if(choice == 0){   //To exit the Program
            cout << "\n==== Exiting Program. Thanks for using my program :) ====\n";
            break;
        }

        else{  //If a choice input is <0 or >6
            cout << "\n\tInvalid Choice! Please enter choice again (0 - 6)\n";
        }
    }while(choice!=0);
    
    return 0;
}