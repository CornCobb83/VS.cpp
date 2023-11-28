// Assignment #5
// Jordan Cobb

#ifndef CARDPACK_H
#define CARDPACK_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "RareCard.h"

using namespace std;

const int MAX_PACKSIZE = 10;
const string DEFAULT_NAME = "unknown";
const int DEFAULT_SIZE = 0;

class CardPack {
public:

    // Declarations for constructors
    CardPack();
    CardPack(string Pname, int size);

    // Declarations for accessors
    string getName() const;
    int getSize() const;
    const RareCard* getCard() const;
    const RareCard* getCard(int index) const;

    // Declarations for mutators
    void setName(string name);
    void setSize(int size);
    void setCard(int index, RareCard& newCard);

    // Declarations for other methods
    CardPack& operator=(const CardPack& other);
    bool operator==(const CardPack& other) const;
    ~CardPack();

    // Other
    void display() const;
    void addCard(const RareCard& newCard);

private:
    // Declarations of data members
    string packName;
    int packSize;
    RareCard *thePack[MAX_PACKSIZE];

};

#endif
