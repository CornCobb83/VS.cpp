// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Jordan Cobb and Aja Brunet

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "MagicItem.h"

using namespace std;

// CONSTRUCTORS
MagicItem::MagicItem() {
    itemType = "Unknown";
    itemLevel = 0;
    itemCost = 0.0;
    itemWeight = 0.0;
}
MagicItem::MagicItem(string type, int level, double cost, double weight) {
    itemType = type;
    itemLevel = level;
    itemCost = cost;
    itemWeight = weight;
}
MagicItem::MagicItem(string type, int level) {
    itemType = type;
    itemLevel = level;
    itemCost = 0.0;
    itemWeight = 0.0;
}

// ACCESSORS
string MagicItem::getType() const{
    return itemType;
}
int MagicItem::getLevel() const{
    return itemLevel;
}
double MagicItem::getCost() const{
    return itemCost;
}
double MagicItem::getWeight() const{
    return itemWeight;
}

// MUTATORS
void MagicItem::setType(string type) {
    itemType = type;
}
void MagicItem::setLevel(int level) {
    itemLevel = level;
}
void MagicItem::setCost(double cost) {
    itemCost = cost;
}
void MagicItem::setWeight(double weight) {
    itemWeight = weight;
}

// OTHER METHODS

string MagicItem::to_string() const{
    return itemType + " " + std::to_string(itemLevel) + " " + std::to_string(itemCost) + " " + std::to_string(itemWeight);
}

void MagicItem::print() const{
    cout << fixed << setprecision(2)
         << "***************\n"
         << "Item type: " << itemType << endl
         << "Item level: " << itemLevel << endl
         << "Item Cost: " << itemCost << endl
         << "Item Weight: " << itemWeight << endl;
}