//    CS 112 Fall 2023 - Week 05 Lab
//    C++ Classes and Methods
//    Jordan Cobb and Aja Brunet

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
    PlayerChar ariel("Ariel", 250, 5.0, "Sprite");
    PlayerChar sally("Sally", 200, 3, "Faun");

    // Call to a PlayerChar method


    david.printPlayerInfo();
    david.increaseStrength(50);
    david.printPlayerInfo();
    david.printPlayerInfo();
    david.agilityBoost(25);
    david.printPlayerInfo();
    PlayerChar new_player (david);
    new_player.printPlayerInfo();
    david.resetStrength();
    david.printPlayerInfo();
    ariel.printPlayerInfo();
    sally.printPlayerInfo();




    return EXIT_SUCCESS;
}