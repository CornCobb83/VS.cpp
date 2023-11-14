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
        thePack = new GameCard[packSize];
    }

    CardPack::CardPack(string name, int level, string type, string Pname, int size) : GameCard(name, level, type) {
        packName = Pname;
        if (size > MAX_PACKSIZE)
            size = MAX_PACKSIZE;
        packSize = size;
        thePack = new GameCard[packSize];
    }

    CardPack::CardPack(string Pname, int size) : GameCard() {
        packName = Pname;
        if (size > MAX_PACKSIZE)
            size = MAX_PACKSIZE;
        packSize = size;
        thePack = new GameCard[packSize];
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
    CardPack& CardPack::operator =(const CardPack& rhs) {
        if (this != &rhs) {
            GameCard::operator =(rhs);

            delete[] thePack;
            packName = rhs.packName;
            packSize = rhs.packSize;
            thePack = new GameCard[packSize];
            for (int i = 0; i < packSize; ++i) {
                thePack[i] = rhs.thePack[i];
            }
        }
        return *this;
    }

    bool CardPack::operator ==(const CardPack& rhs) const {
        return (packName == rhs.getName() && packSize == rhs.getSize());
    }

    CardPack::~CardPack() {
        delete[] thePack;
        thePack = nullptr;
    }

    // Other
    void CardPack::display() const {
        if (packSize > 0) {
            GameCard::display();
            cout << "Pack Name: " << packName << endl
                << "Pack Size: " << packSize << endl;
        }
        else {
            cout << "There are no cards in this pack" << endl;
        }
    }

    void CardPack::addCard(const GameCard& newCard) {
        if (packSize < MAX_PACKSIZE) {
            thePack[packSize] = new GameCard(newCard);
            packSize++;
        } else {
            cout << "Card pack is full." << endl;
        }
    }