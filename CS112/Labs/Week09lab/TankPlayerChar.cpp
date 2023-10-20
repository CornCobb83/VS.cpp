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

TankPlayerChar::TankPlayerChar(string name):PlayerChar(name) {
    playerAggro = this->getStrength  / 2;
    playerStamina = (this->getStrength * this->getAgility) / 2;
}

TankPlayerChar::TankPlayerChar(string name, Role role):PlayerChar(name, role) {
    playerAggro = this->getStrength  / 2;
    playerStamina = (this->getStrength * this->getAgility) / 2;
}

// ACCESSORS
int TankPlayerChar::getAggro() const{
    return playerAggro;
}

double TankPlayerChar::getStamina() const{
    return playerStamina;
}

// MUTATORS
void TankPlayerChar::setAggro(int aggro) {
    playerAggro = aggro;
}

void TankPlayerChar::setStamina(double stamina) {
    playerStamina = stamina;
}

// OPERATOR METHODS
bool TankPlayerChar::operator ==(const TankPlayerChar& rhs) const {
    // For PlayerChars to be "equal", their strength and agility
    // multiplied together should be with 100 of each other
    // (though the names and Roles can be different)

    // double player1Value = playerStrength * playerAgility * playerAggro * playerStamina;
    // double player2Value = rhs.getStrength() * rhs.getAgility() * rhs.getAggro() * rhs.getStamina();
    double player1Value = playerAggro * playerStamina;
    double player2Value = rhs.getAggro() * rhs.getStamina();

    return (abs(player1Value - player2Value) < 100 );
}

// OTHER METHODS
void TankPlayerChar::display() const{
    cout << "*** CHARACTER INFORMATION ***" << endl
         << "CHARACTER IS " << getName << " the "
                            << getRole << endl
         << "STRENGTH IS " << playerStrength << endl
         << "AGILITY IS  " << playerAgility << endl
         << endl;
}

string PlayerChar::to_string() const {
    return playerName + ", "
         + ROLE_NAMES[playerRole] + ", "
         + std::to_string(playerStrength) + ", "
         + std::to_string(playerAgility);
}
