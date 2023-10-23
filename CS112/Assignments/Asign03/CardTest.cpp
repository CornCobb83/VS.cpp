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
    card1.getLevel();
    card1.getType();

    card2.setName("Charmander");
    card2.setLevel(3);
    card2.setType("Fire");

    card2.getName();
    card2.getLevel();
    card2.getType();

    myCardPtr->display();
    card1.display();
    card2.display();

    return 0;
}