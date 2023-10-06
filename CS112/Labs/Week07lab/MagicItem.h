// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Jordan Cobb and Aja Brunet

#ifndef MAGICITEM_H
#define MAGICITEM_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class MagicItem {
public:
    // Declarations for constructors
    //one for all, one for none, one for some
    MagicItem();
    MagicItem(string type, int level, double cost, double weight);
    MagicItem(string type, int level);

    // Declarations for accessors
    string getType() const;
    int getLevel() const;
    double getCost() const;
    double getWeight() const;

    // Declarations for mutators
    void setType(string type);
    void setLevel(int level);
    void setCost(double cost);
    void setWeight(double weight);

    // Declarations for other methods
    void print() const;
    string to_string() const;

private:
    // Declarations of data members
    string itemType;
    int itemLevel;
    double itemCost;
    double itemWeight;

};

#endif /* MAGICITEM_H */
