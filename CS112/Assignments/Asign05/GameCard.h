// Assignment #3
// Jordan Cobb

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
    GameCard(string name, string type);

    // Declarations for accessors
    string getName() const;
    int getLevel() const;
    string getType() const;

    // Declarations for mutators
    void setName(string name);
    void setLevel(int level);
    void setType(string type);

    // Declarations for other methods
    bool operator ==(const GameCard& rhs) const;
    string to_string() const;
    // Copy
    GameCard(const GameCard& rhs);
    GameCard(const GameCard* rhs);
    // =Operator
    GameCard& operator =(const GameCard& rhs);
    GameCard& operator =(const GameCard* rhs);
    void display() const;

protected:
    // Declarations of data members
    string cardName;
    int cardLevel;
    string cardType;

};

#endif