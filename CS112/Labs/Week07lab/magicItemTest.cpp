// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Jordan Cobb and Aja Brunet


#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "MagicItem.h"

using namespace std;

int main() {
    cout << boolalpha;

    MagicItem* item4 =new MagicItem();
    item4->type = item4.setType("Arrow");

    //Tests of MagicItem methods
    MagicItem item1;
    MagicItem item2("sword", 2, 5.55, 6.0);
    MagicItem item3("wand", 5);

    item1.print();
    item2.print();
    item3.print();



    return EXIT_SUCCESS;
}
