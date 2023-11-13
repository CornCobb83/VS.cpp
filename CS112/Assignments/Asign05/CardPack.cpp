// Assignment #5
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "CardPack.h"

using namespace std;

    // Declarations for constructors
    CardPack();
    CardPack(string name, int level, string type, string rarity, bool art, string name, int size);
    CardPack(string name, int size);

    // Declarations for accessors
    string getName() const {
        return 
    }
    int getSize() const;

    // Declarations for mutators
    void setName();
    void setSize();

    // Declarations for other methods
    void display() const;