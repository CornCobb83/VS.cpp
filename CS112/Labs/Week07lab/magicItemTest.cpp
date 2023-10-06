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

    MagicItem* item4Ptr =new MagicItem();
    item4Ptr->itemType = "Arrow";

    //Tests of MagicItem methods
    MagicItem item1;
    MagicItem item2("sword", 2, 5.55, 6.0);
    MagicItem item3("wand", 5);

    item1.print();
    item2.print();
    item3.print();
    item4Ptr->print();

    return EXIT_SUCCESS;
}
