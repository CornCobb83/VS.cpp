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
MagicItem::magicItem(type, level) {
    itemType = type;
    itemLevel = level;
}

// ACCESSORS
string MagicItem::getType(){
    return Itemype;
}
int MagicItem::getLevel();{
    return level;
}
double MagicItem::getCost(){
    return cost;
}
double MagicItem::getWeight(){
    return weight;
}

// MUTATORS

// OTHER METHODS
string MagicItem::to_String() {
    return std::to_String();
}
