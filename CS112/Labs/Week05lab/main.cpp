//    CS 112 Fall 2023 - Week 05 Lab
//    C++ Classes and Methods


#include <cstdlib>
#include <iostream>
#include <string>
#include "PlayerChar.h"

using namespace std;

int main() {
    cout << boolalpha;

    // See PlayerChar.h for the public method headers
    // and private data fields

    // See PlayerChar.cpp for the methods

    // Declaration of an object of type PlayerChar
    // david will be a default PlayerChar (Fred the Ogre)

    PlayerChar david;

    // Call to a PlayerChar method

    david.printPlayerInfo();

    return EXIT_SUCCESS;
}