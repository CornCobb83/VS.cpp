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
    cardType = "unknown";
}

GameCard::GameCard(string name, int level, string type) {
    cardName = name;
    cardLevel = level;
    cardType = type;
}

GameCard::GameCard(string name, string type) {
    cardName = name;
    cardType = type;
}

// ACCESSORS
string GameCard::getName() const {
    return cardName;
}

int GameCard::getLevel() const {
    return cardLevel;
}

string GameCard::getType() const {
    return cardType;
}

// MUTATORS
void GameCard::setName(string name) {
    cardName = name;
}

void GameCard::setLevel(int level) {
    cardLevel = level;
}

void GameCard::setType(string type) {
    cardType = type;
}

// OTHER METHODS
string GameCard::to_string() const{
    return cardName + " " + std::to_string(cardLevel) + " " + cardType;
}

void GameCard::display() const{
    cout << fixed << setprecision(2)
         << "***************" << endl
         << "Pokemon Card" << endl
         << "Name:  " << cardName << endl
         << "Level: " << cardLevel << endl
         << "Type:  " << cardType << endl;
}