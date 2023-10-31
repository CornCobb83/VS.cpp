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

    bool playerEqual = GameCard::operator ==(rhs);
    bool isType = (abs(playerAggro - rhs.getAggro()) < 50);
    bool isLevel = (abs(playerStamina - rhs.getStamina()) < 100);

    return (playerEqual && isAggro && isStamina);
}

string SecretRare::to_string() const{
    return GameCard::to_string + " " + std::to_string(cardRarity);
}

void SecretRare::display() const{
    GameCard::display();
    cout << fixed << setprecision(2)
         << "Rarity:" << cardRarity << end;
}