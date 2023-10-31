// Assignment #4
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "GameCard.h"

using namespace std;

// CONSTRUCTORS
SecretRare::SecretRare(){
    rarity = RARITY_DEFAULT;
}

SecretRare::SecretRare(string name, int level, string type, string rarity) : GameCard(name, level, type){
    cardRarity = rarity
}

// ACCESSORS
string SecretRare::getName() const {

    return cardName;
}

int SecretRare::getLevel() const {
    return cardLevel;
}

string SecretRare::getType() const {
    return cardType;
}

// MUTATORS
void SecretRare::setName(string name) {
    cardName = name;
}

void SecretRare::setLevel(int level) {
    cardLevel = level;
}

void SecretRare::setType(string type) {
    cardType = type;
}

// OTHER METHODS
string SecretRare::to_string() const{
    return cardName + " " + std::to_string(cardLevel) + " " + cardType;
}

void SecretRare::display() const{
    cout << fixed << setprecision(2)
         << "***************" << endl
         << "Pokemon Card" << endl
         << "Name:  " << cardName << endl
         << "Level: " << cardLevel << endl
         << "Type:  " << cardType << endl;
}