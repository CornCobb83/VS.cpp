// Assignment #4
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "RareCard.h"

using namespace std;

// CONSTRUCTORS
RareCard::RareCard() : GameCard() {
    cardRarity = RARITY_DEFAULT;
    cardFullArt = FULLART_DEFAULT;
}

RareCard::RareCard(string name, int level, string type, string rarity, bool art) : GameCard(name, level, type) {
    cardRarity = rarity;
    cardFullArt = art;
}

RareCard::RareCard(string name, int level, string type) : GameCard(name, level, type) {
    cardRarity = RARITY_DEFAULT;
    cardFullArt = FULLART_DEFAULT;
}

RareCard::RareCard(const RareCard& newCard) : GameCard(newCard) {
    cardRarity = newCard.cardRarity;
    cardFullArt = newCard.cardFullArt;
}

// ACCESSORS
string RareCard::getRarity() const {
    return cardRarity;
}

bool RareCard::getFullArt() const {
    return cardFullArt;
}

// MUTATORS
void RareCard::setRarity(string rarity) {
    cardRarity = rarity;
}

void RareCard::setFullArt(bool art) {
    cardFullArt = art;
}

// OTHER METHODS
bool RareCard::operator ==(const RareCard& rhs) const {
    return (cardFullArt == rhs.getFullArt() && cardRarity == rhs.getRarity() && cardLevel == rhs.getLevel());
}

RareCard& RareCard::operator =(const RareCard& rhs) {
    if (this != &rhs) {
        cardRarity = rhs.cardRarity;
        cardFullArt = rhs.cardFullArt;
        GameCard::operator =(rhs);
    }

    return *this;
}

string RareCard::to_string() const{
    return GameCard::to_string() + ", " + cardRarity + ", " + std::to_string(cardFullArt);
}

void RareCard::display() const{
    GameCard::display();
    if (cardRarity != RARITY_DEFAULT || cardFullArt != FULLART_DEFAULT) {
    cout << "Rarity:   " << cardRarity << endl
         << "Full Art: " << cardFullArt << endl;
    }
}
