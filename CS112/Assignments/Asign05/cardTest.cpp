// // Assignment #5
// // Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "GameCard.h"
#include "SecretRare.h"
#include "CardPack.h"

using namespace std;

int main() {
    cout << boolalpha;

    // From original CardTest.cpp
    GameCard *myCardPtr;
    myCardPtr = new GameCard("Pikachu", 7, "Electric");

    GameCard card1("Squirtle", 5, "Water");
    GameCard card2;

    card2.setName("Charmander");
    card2.setLevel(3);
    card2.setType("Fire");

    CardPack pack1;
    cout << "*** Testing the output of a default pack ***" << endl;
    pack1.display();

    

    cout << "Added 3 created cards to the pack using addCard()" << endl;
    pack1.display();

    return 0;
}