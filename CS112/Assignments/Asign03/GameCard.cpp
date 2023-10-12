#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "MagicItem.h"

using namespace std;

// CONSTRUCTORS
GameCard::GameCard() {
    itemType = "Unknown";
    itemLevel = 0;
    itemCost = 0.0;
    itemWeight = 0.0;
}
GameCard::GameCard(string type, int level, double cost, double weight) {
    itemType = type;
    itemLevel = level;
    itemCost = cost;
    itemWeight = weight;
}
GameCard::GameCard(string type, int level) {
    itemType = type;
    itemLevel = level;
    itemCost = 0.0;
    itemWeight = 0.0;
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