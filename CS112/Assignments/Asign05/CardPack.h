// Assignment #5
// Jordan Cobb

#ifndef CARDPACK_H
#define CARDPACK_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <SecretRare.h>

using namespace std;

class CardPack : SecretRare{
public:

    // Declarations for constructors
    

    // Declarations for accessors

    // Declarations for mutators

    // Declarations for other methods

private:
    // Declarations of data members
    string PackName;
    int packSize;
    SecretRare *cardPtr;

};

#endif