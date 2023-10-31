// Assignment #4
// Jordan Cobb

#ifndef SECRETRARE_H
#define SECRETRARE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "GameCard.h"

using namespace std;

// Definition of derived class TankPlayerChar
class SecretRare : public GameCard {
public:
//CONSTRUCTORS
TankPlayerChar();
TankPlayerChar(string name);
TankPlayerChar(string name, Role role);

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
    int playerAggro;
    double playerStamina;

};

#endif