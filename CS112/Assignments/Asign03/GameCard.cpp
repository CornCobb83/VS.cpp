#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "GameCard.h"

using namespace std;

// CONSTRUCTORS
GameCard::GameCard(){
    cardName = "unknown";
    cardLevel = -1;
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
string getName() const {
    return cardName;
}

int getLevel() const {
    return cardLevel;
}

string getType() const {
    return cardType;
}

// MUTATORS
void setName(string name) {
    cardName = name;
}

void setLevel(int level) {
    cardLevel = level;
}

void setType(string type) {
    cardType = type;
}

// OTHER METHODS
string MagicItem::to_string() const{
    return cardName + " " + std::to_string(CardLevel) + " " + std::to_string(CardType);
}

void MagicItem::display() const{
    cout << fixed << setprecision(2)
         << "Name:  " << cardName << endl
         << "Level: " << cardLevel << endl
         << "Type:  " << cardType << endl;
}