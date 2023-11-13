// Assignment #5
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "CardPack.h"

using namespace std;

    // Constructors
    CardPack::CardPack() : GameCard() {
        packName = DEFAULT_NAME;
        packSize = DEFAULT_SIZE;
    }
    CardPack::CardPack(string name, int level, string type, string rarity, bool art, string Pname, int size) : SecretRare(name, level, type, rarity, art) {
        packName = Pname;
        packSize = size;
    }
    CardPack::CardPack(string name, int size) : GameCard() {
        packName = name;
        packSize = size;
    }

    // Accessors
    string CardPack::getName() const {
        return packName;
    }
    int CardPack::getSize() const {
        return packSize;
    }

    // Mutators
    void CardPack::setName(string name) {
        packName = name;
    }
    void CardPack::setSize(int size) {
        packSize = size;
    }

    // Declarations for other methods
    void CardPack::display() const;