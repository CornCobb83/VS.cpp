//    CS 112 Spring 2023 - Week 05 Lab
//    C++ Classes and Methods

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef PLAYERCHAR_H
#define PLAYERCHAR_H

// Declarations of constants used by the
// class methods go here

const string DEFAULT_NAME     = "Fred";
const int    DEFAULT_STRENGTH = 250;
const double DEFAULT_AGILITY  = 2.5;
const string DEFAULT_ROLE     = "Ogre";

// PlayerChar class definition

class PlayerChar {
public:
    // Headers for constructors

    PlayerChar(string, int, double, string);
    PlayerChar(string, string);
    PlayerChar();

    // Headers for accessors

    string getName() const;

    // Headers for mutators

    void setName(string);

    // Headers for other functions

    void printPlayerInfo();


private:
    // member variables, data members, data fields...
    // Those all mean the same thing

    string playerName;
    int    playerStrength;
    double playerAgility;
    string playerRole;

};

#endif /* PLAYERCHAR_H */

