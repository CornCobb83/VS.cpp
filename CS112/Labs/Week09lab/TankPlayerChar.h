//    CS 112 Fall 2023 - Week 09 Lab

#ifndef TANKPLAYERCHAR_H
#define TANKPLAYERCHAR_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "PlayerChar.h"

using namespace std;



// Definition of derived class TankPlayerChar
class TankPlayerChar : public PlayerChar(
public:
//CONSTRUCTORS
TankPlayerChar();
TankPlayerChar(string name);
TankPlayerChar(string name, Role role);

// TankPlayerChar();
// TankPlayerChar(int playerAggro);
// TankPlayerChar(int playerAggro, double inputlayerStamina);

//ACCESSORS


//MUTATORS

//OTHER METHODS
private:
    const TankPlayerChar DEFAULT_AGGRO = 0;
    const TankPlayerChar DEAFULT_STAMINA = 0.0;

);


#endif /* TANKPLAYERCHAR_H */

