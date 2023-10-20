//    CS 112 Fall 2023 - Week 09 Lab

#ifndef TANKPLAYERCHAR_H
#define TANKPLAYERCHAR_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "PlayerChar.h"

using namespace std;

const TankPlayerChar DEFAULT_AGGRO = 0;
const TankPlayerChar DEAFULT_STAMINA = 0.0;

// Definition of derived class TankPlayerChar
class TankPlayerChar : public PlayerChar(
public:
//CONSTRUCTORS
TankPlayerChar();
TankPlayerChar(int playerAggro);
TankPlayerChar(int playerAggro, double inputlayerStamina);
//TankPlayerChar(const PlayerChar& existingPoint);

//ACCESSORS


//MUTATORS

//OTHER METHODS
private:


);


#endif /* TANKPLAYERCHAR_H */

