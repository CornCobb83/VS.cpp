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
    cardFullArt = FULLART_DEFAULT;
}

SecretRare::SecretRare(string name, int level, string type, string rarity, bool art) : GameCard(name, level, type) {
    cardRarity = rarity;
    cardFullArt = art;
}

SecretRare::SecretRare(string name, int level, string type) : GameCard(name, level, type) {
    cardRarity = RARITY_DEFAULT;
    cardFullArt = FULLART_DEFAULT;
}

// ACCESSORS
string SecretRare::getRarity() const {
    return cardRarity;
}

bool SecretRare::getFullArt() const {
    return cardFullArt;
}

// MUTATORS
void SecretRare::setRarity(string rarity) {
    cardRarity = rarity;
}

void SecretRare::setFullArt(bool art) {
    cardFullArt = art;
}

// OTHER METHODS
bool SecretRare::operator ==(const SecretRare& rhs) const {
    return (cardFullArt == rhs.getFullArt() && cardRarity == rhs.getRarity() && cardLevel == rhs.getLevel());
}

string SecretRare::to_string() const{
    return GameCard::to_string() + " " + cardRarity + " " + std::to_string(cardFullArt);
}

void SecretRare::display() const{
    GameCard::display();
    cout << "Rarity:   " << cardRarity << endl
         << "Full Art: " << cardFullArt << endl;
}