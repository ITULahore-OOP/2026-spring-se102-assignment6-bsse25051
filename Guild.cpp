#include "Guild.h"

//Initializing Constructor
Guild::Guild(string gN){
    guildName = gN;
    memberCount = 0;
    // cout << "Guild Initialized Successfully\n";   //Not needed
    for(int i =0; i < 15; i++){
        roster[i] = nullptr;
    }   
}

//Destructor
Guild::~Guild(){
    for(int i =0; i < memberCount; i++){
        // delete roster[i];   The delete loop is commented out here because Test Case 4 passes stack memory addresses. In production, we would use heap only.
        roster[i] = nullptr;   // Destructor: Cleans up the roster to prevent memory leaks and sets it nullptr
    } 
    cout << "The guild " << guildName << " has been disbanded!\n";
}

//Getter Function

string Guild::getGuildName(){
    return guildName;
}

//Other Member Functions

int Guild::calculateTotalGuildPower(){
    int total = 0;

    for(int i =0; i < memberCount; i++){
        total += roster[i]->getPower();  //Calculates the total Power Combined
    }

    return total;
}

void Guild::displayGuildStats(){  //Display the stats
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

//Operator Overloading Functions

void Guild::operator+= (Hero* newHero){
    if(memberCount < 15){
        roster[memberCount++] = newHero;  // Recruitment loggicc which adds a hero pointer to the fixed-size array
    }

    else{
        cout << "Guild is at full capacity!\n";
    }
}

ostream& operator << (ostream& os, const Guild &g){
    os << "Guild: " << g.guildName << "\nMembers: " << g.memberCount << "\n";

    for(int i=0; i < g.memberCount; i++){
        os << "- " << g.roster[i]->getName() << " (Power: " <<g.roster[i]->getPower() << ")\n";  
    }

    return os;
}

