// Assignment #5
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "CardPack.h"

using namespace std;

    // Constructors
    CardPack::CardPack() : SecretRare() {
        packName = DEFAULT_NAME;
        packSize = DEFAULT_SIZE;
    }
    CardPack::CardPack(string name, int level, string type, string rarity, bool art, string Pname, int size) : SecretRare(name, level, type, rarity, art) {
        packName = Pname;
        packSize = size;
    }
    CardPack::CardPack(string name, int size) : SecretRare() {
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
    void CardPack::display() const {
        SecretRare::display();
    cout << "Pack Name: " << cardRarity << endl
         << "Pack Size: " << cardFullArt << endl;
    }