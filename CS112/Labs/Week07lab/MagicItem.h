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
    magicItem(string type, int level, double cost, double weight);
    magicItem(type, level);

    // Declarations for accessors
    string getType();
    int getLevel();
    double getCost();
    double getWeight();

    // Declarations for mutators
    void setType();
    void setLevel();
    void setCost();
    void setWeight();

    // Declarations for other methods
    void print();
    string to_String();

private:
    // Declarations of data members
    string itemType;
    int itemLevel;
    double itemCost;
    double itemWeight;

};

#endif /* MAGICITEM_H */
