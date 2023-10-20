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
class TankPlayerChar : public PlayerChar {
public:
//CONSTRUCTORS
TankPlayerChar();
TankPlayerChar(string name);
TankPlayerChar(string name, Role role);

// TankPlayerChar();
// TankPlayerChar(int playerAggro);
// TankPlayerChar(int playerAggro, double inputlayerStamina);

//ACCESSORS
int getAggro() const;
double getStamina() const;

//MUTATORS
void setAggro(int aggro);
void setStamina(double stamina);

//OTHER METHODS

bool operator ==(const TankPlayerChar& rhs) const;

void display() const;
string to_string() const;

private:
    // const int DEFAULT_AGGRO = 0;
    // const double DEFAULT_STAMINA = 0.0;
    int playerAggro;
    double playerStamina;

};


#endif /* TANKPLAYERCHAR_H */

