// Assignment #5
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "CardPack.h"

using namespace std;

    // Declarations for constructors
    CardPack::CardPack() : GameCard() {}
    CardPack::CardPack(string name, int level, string type, string rarity, bool art, string name, int size);
    CardPack::CardPack(string name, int size);

    // Declarations for accessors
    string CardPack::getName() const {
        return packName;
    }
    int CardPack::getSize() const {
        return packSize;
    }

    // Declarations for mutators
    void CardPack::setName(string name) {
        packName = name;
    }
    void CardPack::setSize(int size) {
        packSize = size;
    }

    // Declarations for other methods
    void CardPack::display() const;