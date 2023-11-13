// Assignment #5
// Jordan Cobb

#ifndef CARDPACK_H
#define CARDPACK_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <SecretRare.h>

using namespace std;

const int PACKSIZE = 10;

class CardPack : SecretRare {
public:

    // Declarations for constructors
    CardPack();
    CardPack(string name, int level, string type, string rarity, bool art, string name, int size);
    CardPack(string name, int size);

    // Declarations for accessors
    string getName() const;
    int getSize() const;

    // Declarations for mutators
    void setName();
    void setSize();

    // Declarations for other methods

private:
    // Declarations of data members
    string PackName;
    int packSize;
    SecretRare *cardPtr;

};

#endif