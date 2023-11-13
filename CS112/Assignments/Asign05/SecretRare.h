// Assignment #4
// Jordan Cobb

#ifndef SECRETRARE_H
#define SECRETRARE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "GameCard.h"

using namespace std;

const string RARITY_DEFAULT = "Common";
const bool FULLART_DEFAULT = false;

// Definition of derived class SecretRare
class SecretRare : public GameCard {
public:

//CONSTRUCTORS
    SecretRare();
    SecretRare(string name, int level, string type, string rarity, bool art);
    SecretRare(string name, int level, string type);

    // Declarations for accessors
    string getRarity() const;
    bool getFullArt() const;

    // Declarations for mutators
    void setRarity(string rarity);
    void setFullArt(bool art);

    // Declarations for other methods
    bool operator ==(const SecretRare& rhs) const;
    string to_string() const;
    void display() const;

private:
    // Declarations of data members
    string cardRarity;
    bool cardFullArt;

};

#endif