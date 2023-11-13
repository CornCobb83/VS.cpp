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
    CardPack::CardPack(string name, int level, string type, string Pname, int size) : GameCard(name, level, type) {
        packName = Pname;
        packSize = size;
    }
    CardPack::CardPack(string Pname, int size) : GameCard() {
        packName = Pname;
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
    CardPack& CardPack::operator=(const CardPack& rhs) {
        if (this != &rhs) {
            this = rhs;
        }
        return *this;
    }
    bool CardPack::operator==(const CardPack& rhs) const {
        return (packName == rhs.CardPack::getName() && packSize == rhs.CardPack::getSize());
    }
    CardPack::~CardPack() {
        delete[] thePack;
    }

    // Other
    void CardPack::display() const {
        GameCard::display();
    cout << "Pack Name: " << packName << endl
         << "Pack Size: " << packSize << endl;
    }