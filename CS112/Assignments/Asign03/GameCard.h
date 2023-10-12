#ifndef GAMECARD_H
#define GAMECARD_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class GameCard {
public:
    // Declarations for constructors
    //one for all, one for none, one for some
    GameCard();
    GameCard(string name, int level, string type);
    GameCard(string name, int level);

    // Declarations for accessors


    // Declarations for mutators


    // Declarations for other methods
    void display() const;

private:
    // Declarations of data members


};

#endif