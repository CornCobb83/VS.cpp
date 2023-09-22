//    CS 112 Fall 2023 - Week 05 Lab
//    C++ Classes and Methods
//    Jordan Cobb and Aja Brunet

#include <cstdlib>
#include <iostream>
#include <string>
#include "PlayerChar.h"

using namespace std;

// CONSTRUCTORS

// PlayerChar: string int double string -> void
// Expects a name, a strength, an agility, and a role
// Returns nothing
// Side effect: creates an instance of a PlayerChar
//
// Example:
// PlayerChar("Ariel", 250, 5.0, "Sprite")
// creates a Sprite named Ariel with a strength of 250
// and an agility of 5.0

//int originalStrength = 0;

PlayerChar::PlayerChar(string a_name, int a_strength,
                       double an_agility, string a_role) {
    playerName = a_name;
    playerStrength = a_strength;
    originalStrength = a_strength;
    playerAgility = an_agility;
    playerRole = a_role;
}

// We can OVERLOAD the CONSTRUCTOR
// In other words, we can write constructor function
// (method) definitions that use different types of args

PlayerChar::PlayerChar(string a_name, string a_role) {
    playerName = a_name;
    playerStrength = DEFAULT_STRENGTH;
    originalStrength = DEFAULT_STRENGTH;
    playerAgility = DEFAULT_AGILITY;
    playerRole = a_role;
}

PlayerChar::PlayerChar(const PlayerChar& existingPlayer) {
    PlayerChar new_player (existingPlayer);
    playerName = "Copy of " + existingPlayer.getName();
    playerStrength = existingPlayer.getStrength();
    playerAgility = existingPlayer.getAgility();
    playerRole = existingPlayer.getRole();
}

// The "default" (zero-argument) PlayerChar will be
// an Ogre named Fred

PlayerChar::PlayerChar() {
    playerName = DEFAULT_NAME;
    playerStrength = DEFAULT_STRENGTH;
    originalStrength = DEFAULT_STRENGTH;
    playerAgility = DEFAULT_AGILITY;
    playerRole = DEFAULT_ROLE;
}

// ACCESSORS

// getName: void -> string
// Expects nothing (PlayerChar is an implicit argument)
// Return the PlayerChar's name

string PlayerChar::getName() const {
    return playerName;
}

int PlayerChar::getStrength() const {
    return playerStrength;
}

int PlayerChar::getOriginalStrength() const {
    return originalStrength;
}

double PlayerChar::getAgility() const {
    return playerAgility;
}

string PlayerChar::getRole() const {
    return playerRole;
}

// MUTATORS

// setName: string -> void
// Expects a string (PlayerChar is an implicit argument)
// Returns nothing
// Side effect: Mutates value of name

void PlayerChar::setName(string new_name) {
    playerName = new_name;
}

void PlayerChar::increaseStrength(int increase) {
    playerStrength += increase;
}

void PlayerChar::resetStrength() {
    playerStrength = getOriginalStrength();
}

void PlayerChar::agilityBoost(int percentage) {
    double temp = (percentage + 0.00);
    if  (percentage >= 0 && percentage <= 50) {
        playerAgility += (playerAgility * (temp / 100));
    }
    else
        cout << "Invalid Value\n";
}

// OTHER FUNCTIONS

// printPlayerInfo: void -> void
// Expects nothing (PlayerChar is an implicit argument)
// Returns nothing
// Side effects:  Prints to the screen the data member
//     values of the PlayerChar

void PlayerChar::printPlayerInfo() {

    cout << "*************************" << endl
         << "NAME IS " << playerName << endl
         << "STRENGTH IS " << playerStrength << endl
         << "AGILITY IS " << playerAgility << endl
         << "ROLE IS " << playerRole << endl << endl;
}