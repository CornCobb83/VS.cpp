// Assignment #4
// Jordan Cobb

#ifndef RARECARD_H
#define RARECARD_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "GameCard.h"

using namespace std;

const string RARITY_DEFAULT = "Common";
const bool FULLART_DEFAULT = false;

// Definition of derived class RareCard
class RareCard : public GameCard {
public:

//CONSTRUCTORS
    RareCard();
    RareCard(string name, int level, string type, string rarity, bool art);
    RareCard(string name, int level, string type);
    RareCard(const RareCard& newCard);

    // Declarations for accessors
    string getRarity() const;
    bool getFullArt() const;

    // Declarations for mutators
    void setRarity(string rarity);
    void setFullArt(bool art);

    // Declarations for other methods
    bool operator ==(const RareCard& rhs) const;
    RareCard& operator =(const RareCard& rhs);
    string to_string() const;
    void display() const;

protected:
    // Declarations of data members
    string cardRarity;
    bool cardFullArt;

};

#endif
