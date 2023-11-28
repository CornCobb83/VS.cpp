// // Assignment #5
// // Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "GameCard.h"
#include "RareCard.h"
#include "CardPack.h"

using namespace std;

int main() {
    cout << boolalpha;

    // From original CardTest.cpp
    RareCard *myCardPtr;
    myCardPtr = new RareCard("Pikachu", 7, "Electric");

    RareCard card1("Squirtle", 5, "Water");
    RareCard card2;
    RareCard card3("Charzard", 17, "Fire", "Ultra Rare", true);
    RareCard card4("Mew", 99, "Psychic", "Secret Rare", false);

    card2.setName("Charmander");
    card2.setLevel(3);
    card2.setType("Fire");

    CardPack pack1;
    cout << "*** Testing the output of a default pack ***" << endl;
    pack1.display();
    cout << endl;

    CardPack pack2("Default7", 7);
    cout << "*** Testing the output of a default pack with 7 size***" << endl;
    pack2.display();

    pack1.addCard(*myCardPtr);
    pack1.addCard(card1);
    pack1.addCard(card2);
    pack1.addCard(card3);

    cout << "Added 4 created cards to the pack using addCard()" << endl << endl;
    pack1.setName("Pack 1");
    pack1.display();

    cout << "Copied 4 created cards to new pack using '='" << endl;
    cout << "Displaying pack copy: " << endl << endl;

    CardPack copyPack;
    copyPack = pack1;
    copyPack.setName("Pack Copy");
    copyPack.display();

    cout << "Are the two packs equal? " << (pack1 == copyPack) << endl;
    cout << "Let's test if pack1 is equal to our default7 pack" << endl;
    cout << "Are the two packs equal? " << (pack1 == pack2) << endl << endl;

    cout << "Let's change some cards in our pack1 using mutators!" << endl;
    cout << "Changing card at index 2, card 3, from Charmander to"
             " a new Vaporeon card" << endl;

    RareCard card5("Vapreon", 13, "Water");
    pack1.setCard(2, card5);
    pack1.display();

    cout << "Let's change some cards in our copyPack using mutators!" << endl;
    cout << "Changing card at index 1, card 2, from Squirtle to"
             " to the Vaporeon card" << endl;

    copyPack.setCard(1, card5);
    copyPack.display();

    cout << "Let's get the card at index 2 of pack1 to verify the getCard() function" << endl;
    cout << "The card at index 2 is:" << endl;

    pack1.getCard(2)->display();
    cout << endl;

    return 0;
}
