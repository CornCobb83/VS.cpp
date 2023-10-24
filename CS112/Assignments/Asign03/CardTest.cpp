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

    cout << "Now we are testing card1 which should be set to 'Squirtle', 5, 'Water'" << endl;
    card1.getName();
    cout << "Is card1 name Squirtle? " << (card1.getName() == "Squirtle") << endl;
    card1.getLevel();
    cout << "Is card1 level 5? " << (card1.getLevel() == 5) << endl;
    card1.getType();
    cout << "Is card1 type Water? " << (card1.getName() == "Water") << endl;

    cout << "Now we are testing card2 which should be set to 'unknown', -1, 'unknown'" << endl;
    card1.getName();
    cout << "Is card2 name unknown? " << (card2.getName() == "unknown") << endl;
    card1.getLevel();
    cout << "Is card2 level -1? " << (card2.getLevel() == -1) << endl;
    card1.getType();
    cout << "Is card2 type unknown? " << (card2.getName() == "unknown") << endl;

    cout << "Now we are changing the values of card2" << endl;
    card2.setName("Charmander");
    card2.setLevel(3);
    card2.setType("Fire");

    cout << "Now we are testing card2 which should be set to 'Charmander', 3, 'Fire'" << endl;
    card2.getName();
    cout << "Is card2 name Charmander? " << (card2.getName() == "Charmander") << endl;
    card2.getLevel();
    cout << "Is card2 level 3? " << (card2.getLevel() == 3) << endl;
    card2.getType();
    cout << "Is card2 type Fire? " << (card2.getName() == "Fire") << endl;

    myCardPtr->display();
    card1.display();
    card2.display();

    return 0;
}