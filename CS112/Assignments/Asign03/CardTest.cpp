// Assignment #3
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "GameCard.h"

using namespace std;

int main() {
    cout << boolalpha;

    GameCard *myCardPtr;
    myCardPtr = new GameCard("Pikachu", 7, "Electric");

    GameCard card1("Squirtle", 5, "Water");
    GameCard card2;

    card1.getName();
    cout << "Is card1 name Squirtle? " << (card1.getName() == "Squirtle") << endl;
    card1.getLevel();
    card1.getType();

    card2.setName("Charmander");
    card2.setLevel(3);
    card2.setType("Fire");

    card2.getName();
    cout << "Is card2 name Charmander? " << (card2.getName() == "Charmander") << endl;
    card2.getLevel();
    cout << "Is card2 level 3? " << (card2.getLevel() == 3) << endl;
    card2.getType();
    cout << "Is card2 name Charmander? " << (card2.getName() == "Charmander") << endl;

    myCardPtr->display();
    card1.display();
    card2.display();

    return 0;
}