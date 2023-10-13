#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "MagicItem.h"

using namespace std;

// CONSTRUCTORS
    GameCard::GameCard(){
        cardName = "unknown";
        cardLevel = "-1";
        cardtype = "unknown";
    }

    GameCard::GameCard(string name, int level, string type) {
        cardName = name;
        cardLevel = level;
        cardtype = type;
    }

    GameCard::GameCard(string name, string type) {
        cardName = name;
        cardtype = type;
    }

// ACCESSORS


// MUTATORS


// OTHER METHODS

void MagicItem::display() const{
    cout << fixed << setprecision(2)
         << endl;
}