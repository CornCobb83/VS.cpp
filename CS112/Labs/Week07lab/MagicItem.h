// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Jordan Cobb and Aja Brunet

#ifndef MAGICITEM_H
#define MAGICITEM_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class MagicItem {
public:
    // Declarations for constructors
    //one for all, one for none, one for some
    magicItem();

    magicItem(type, level, cost, weight);

    magicItem(type, level);

    // Declarations for accessors


    // Declarations for mutators

    // Declarations for other methods

private:
    // Declarations of data members
    itemType;
    itemLevel;
    itemCost;
    itemWeight;

};

#endif /* MAGICITEM_H */
