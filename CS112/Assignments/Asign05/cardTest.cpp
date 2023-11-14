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
    SecretRare *myCardPtr;
    myCardPtr = new SecretRare("Pikachu", 7, "Electric");

    SecretRare card1("Squirtle", 5, "Water");
    SecretRare card2;

    card2.setName("Charmander");
    card2.setLevel(3);
    card2.setType("Fire");

    CardPack *pack1 = new CardPack;
    cout << "*** Testing the output of a default pack ***" << endl;
    pack1->display();

    pack1->addCard(*myCardPtr);
    pack1->addCard(card1);
    pack1->addCard(card2);

    cout << "Added 3 created cards to the pack using addCard()" << endl << endl;
    pack1->display();

    delete[] pack1;

    return 0;
}