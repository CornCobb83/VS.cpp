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
const DEFAULT_NAME = "unknown";
const DEFAULT_SIZE = 10;

class CardPack : GameCard {
public:

    // Declarations for constructors
    CardPack();
    CardPack(string name, int level, string type, string rarity, bool art, string Pname, int size);
    CardPack(string name, int size);

    // Declarations for accessors
    string getName() const;
    int getSize() const;

    // Declarations for mutators
    void setName(string name);
    void setSize(int size);

    // Declarations for other methods
    void display() const;

private:
    // Declarations of data members
    string packName;
    int packSize;
    GameCard *thePack;

};

#endif