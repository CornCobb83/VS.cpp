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

// Definition of derived class SecretRare
class SecretRare : public GameCard {
public:

//CONSTRUCTORS
    SecretRare();
    SecretRare(string name, int level, string type);
    SecretRare(string name, string type);

    // Declarations for accessors
    string getName() const;
    int getLevel() const;
    string getType() const;

    // Declarations for mutators
    void setName(string name);
    void setLevel(int level);
    void setType(string type);

    // Declarations for other methods
    string to_string() const;
    void display() const;

private:
    // Declarations of data members
    string cardName;
    int cardLevel;
    string cardType;

};

#endif