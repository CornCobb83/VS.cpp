#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "MagicItem.h"

using namespace std;

// CONSTRUCTORS
    GameCard::GameCard(){

    }

    GameCard::GameCard(string name, int level, string type) {

    }
    
    GameCard::GameCard(string name, string type) {

    }

// ACCESSORS


// MUTATORS


// OTHER METHODS

void MagicItem::display() const{
    cout << fixed << setprecision(2)
         << "***************\n"
         << "Item type: " << itemType << endl
         << "Item level: " << itemLevel << endl
         << "Item Cost: " << itemCost << endl
         << "Item Weight: " << itemWeight << endl << endl;
}