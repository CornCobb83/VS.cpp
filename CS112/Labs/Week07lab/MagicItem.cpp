// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Jordan Cobb and Aja Brunet

#include <cstdlib>
#include <iostream>
#include <string>
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
string MagicItem::to_String() const{
    return to_String(input);
}

string MagicItem::to_String() const{
    return itemType + " " + to_String(itemLevel) + " " + to_String(itemCost) + " " + to_String(itemWeight);
}

void MagicItem::print() const{
    cout << "***************\n"
         << "Item type: " << itemType << endl
         << "Item level: " << itemLevel << endl
         << "Item Cost: " << itemCost << endl
         << "Item Weight: " << itemWeight << endl
         << "***************\n";
}