// Assignment #4
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "GameCard.h"

using namespace std;

// CONSTRUCTORS
SecretRare::SecretRare() : GameCard() {
    rarity = RARITY_DEFAULT;
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

    string card1Value = cardLevel + cardType;
    string card2Value = rhs.getLevel() + rhs.getType();

    return (card1Value == card2Value);
}

string SecretRare::to_string() const{
    return GameCard::to_string + " " + std::to_string(cardRarity);
}

void SecretRare::display() const{
    GameCard::display();
    cout << fixed << setprecision(2)
         << "Rarity:" << cardRarity << end;
}