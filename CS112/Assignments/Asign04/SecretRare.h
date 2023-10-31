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

RARITY_DEFAULT = "common";

// Definition of derived class SecretRare
class SecretRare : public GameCard {
public:

//CONSTRUCTORS
    SecretRare();
    SecretRare(string name, int level, string type, string rarity);

    // Declarations for accessors
    string getRarity() const;

    // Declarations for mutators
    void setRarity(string rarity);


    // Declarations for other methods
    bool operator ==(const SecretRare& rhs) const;
    string to_string() const;
    void display() const;

private:
    // Declarations of data members
    string cardRarity;

};

#endif