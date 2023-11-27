// Assignment #5
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "CardPack.h"

using namespace std;

    // Constructors
    CardPack::CardPack() : RareCard() {
        packName = DEFAULT_NAME;
        packSize = DEFAULT_SIZE;
        for (int i = 0; i < packSize; i++) {
            thePack[i] = new RareCard();
        }
    }

    CardPack::CardPack(string name, int level, string type, string Pname, int size) : RareCard(name, level, type) {
        packName = Pname;
        if (size > MAX_PACKSIZE)
            size = MAX_PACKSIZE;
        packSize = size;
        for (int i = 0; i < packSize; i++) {
            thePack[i] = new RareCard();
        }
    }

    CardPack::CardPack(string Pname, int size) : RareCard() {
        packName = Pname;
        if (size > MAX_PACKSIZE)
            size = MAX_PACKSIZE;
        packSize = size;
        for (int i = 0; i < packSize; i++) {
            thePack[i] = new RareCard();
        }
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

    void CardPack::setCard(int index, const RareCard& newCard) {
        thePack[index] = newCard;
    }

    // Declarations for other methods
    CardPack& CardPack::operator =(const CardPack& rhs) {
        if (this != &rhs) {
            RareCard::operator =(rhs);

            packName = rhs.packName;
            packSize = rhs.packSize;
            for (int i = 0; i < packSize; ++i) {
                thePack[i] = rhs.thePack[i];
            }
        }
        return *this;
    }

    bool CardPack::operator ==(const CardPack& rhs) const {
        if (packSize != rhs.packSize) {
            return false;
        }

        for (int i = 0; i < packSize; i++) {
            if (thePack[i] != rhs.thePack[i]) {
                return false;
            }
        }

        return true;
    }

    CardPack::~CardPack() {
        for (int i = 0; i < packSize; i++) {
            delete thePack[i];
        }
    }

    // Other
    void CardPack::display() const {
        if (packSize > 0) {
            cout << "Pack Name: " << packName << endl
                 << "Pack Size: " << packSize << endl
                 << "Cards in the Pack:" << endl << endl;

            for (int i = 0; i < packSize; ++i) {
                cout << "Card " << i + 1 << ": ";
                thePack[i]->display();
                cout << endl;
            }
        }
        else {
            cout << "There are no cards in this pack" << endl;
        }
    }

    void CardPack::addCard(const RareCard& newCard) {
        if (packSize < MAX_PACKSIZE) {
            thePack[packSize] = new RareCard(newCard);
            packSize++;
        }
        else {
            cout << "Card pack is full." << endl;
        }
    }
