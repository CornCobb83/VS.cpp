// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Jordan Cobb and Aja Brunet

#include <cstdlib>
#include <iostream>
#include <string>
#include "MagicItem.h"

using namespace std;

// CONSTRUCTORS
MagicItem::magicItem() {
    itemType = "Unknown";
    itemLevel = 0;
    itemCost = 0.0;
    itemWeight = 0.0;
}
MagicItem::magicItem(string type, int level, double cost, double weight) {
    itemType = type;
    itemLevel = level;
    itemCost = cost;
    itemWeight = weight;
}
MagicItem::magicItem(string type, int level) {
    itemType = type;
    itemLevel = level;
}

// ACCESSORS
string MagicItem::getType(){
    return itemType;
}
int MagicItem::getLevel();{
    return itemLevel;
}
double MagicItem::getCost(){
    return itemCost;
}
double MagicItem::getWeight(){
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
string MagicItem::to_String() {
    return std::to_String();
}

void MagicItem::print() {
    cout << "***************\n"
         << "Item type: " << itemType << endl
         << "Item level: " << itemLevel << endl
         << "Item Cost: " << itemCost << endl
         << "Item Weight: " << itemWeight << endl
         << "***************\n";
}