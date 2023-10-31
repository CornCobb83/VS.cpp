// Assignment #4
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "SecretRare.h"

using namespace std;

// CONSTRUCTORS
SecretRare::SecretRare() : GameCard() {
    cardRarity = RARITY_DEFAULT;
}

SecretRare::SecretRare(string name, int level, string type, string rarity) : GameCard(name, level, type) {
    cardRarity = rarity;
}

// ACCESSORS
string SecretRare::getRarity() const {

    return cardRarity;
}

// MUTATORS
void SecretRare::setRarity(string rarity) {
    cardRarity = rarity;
}

// OTHER METHODS
bool SecretRare::operator ==(const SecretRare& rhs) const {
    return (cardName == rhs.getName() && cardLevel == rhs.getLevel() && cardType == rhs.getType());
}

string SecretRare::to_string() const{
    return GameCard::to_string() + " " + cardRarity;
}

void SecretRare::display() const{
    GameCard::display();
    cout << "Rarity: " << cardRarity << end;
}