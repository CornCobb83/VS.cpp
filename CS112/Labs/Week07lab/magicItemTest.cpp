// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Jordan Cobb and Aja Brunet


#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include <iomanip>
#include "MagicItem.h"

using namespace std;

int main() {
    cout << boolalpha;
    int *myIntPtr;
    MagicItem *myItemPtr;
    myItemPtr = new MagicItem("Arrow", 10, 2.99, 0.1);

    //Tests of MagicItem methods
    MagicItem item1;
    MagicItem item2("Sword", 2, 5.55, 6.0);
    MagicItem item3("Wand", 5);

    //Calling Accessors
    cout << "Item 1 type: " << item1.getType() << endl;
    cout << "Item 1 level: " << item1.getLevel() << endl;
    cout << "Item 1 cost: " << item1.getCost() << endl;
    cout << "Item 1 weight: " << item1.getWeight() << endl << endl;

    cout << "Item 2 type: " << item2.getType() << endl;
    cout << "Item 2 level: " << item2.getLevel() << endl;
    cout << "Item 2 cost: " << item2.getCost() << endl;
    cout << "Item 2 weight: " << item2.getWeight() << endl << endl;

    cout << "Item 3 type: " << item3.getType() << endl;
    cout << "Item 3 level: " << item3.getLevel() << endl;
    cout << "Item 3 cost: " << item3.getCost() << endl;
    cout << "Item 3 weight: " << item3.getWeight() << endl << endl;

    cout << "Pointer item type: " << myItemPtr->getType() << endl;
    cout << "Pointer item level: " << myItemPtr->getLevel() << endl;
    cout << "Pointer item cost: " << myItemPtr->getCost() << endl;
    cout << "Pointer item weight: " << myItemPtr->getWeight() << endl << endl;

    //Calling Mutators
    item1.setType("Bow");
    item1.setLevel(3);
    item1.setCost(7.25);
    item1.setWeight(15.05);

    item2.setType("Dagger");
    item2.setLevel(1);
    item2.setCost(5.55);
    item2.setWeight(7.35);

    item3.setType("Rubber Chicken");
    item3.setLevel(100);
    item3.setCost(9999999.99);
    item3.setWeight(0.1);

    item1.print();
    item2.print();
    item3.print();
    myItemPtr->print();

    cout << item2.to_string() << endl;
    cout << endl;

    delete myIntPtr;
    return EXIT_SUCCESS;
}
