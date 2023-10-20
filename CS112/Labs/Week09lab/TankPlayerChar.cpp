//    CS 112 Fall 2023 - Week 09 Lab

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "TankPlayerChar.h"

using namespace std;

// CONSTRUCTORS
TankPlayerChar::TankPlayerChar():PlayerChar() {
    playerAggro = this->getStrength  / 2;
    playerStamina = (this->getStrength * this->getAgility) / 2;
}




// ACCESSORS



// MUTATORS



// OPERATOR METHODS



// OTHER METHODS

