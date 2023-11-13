// Assignment #4
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "GameCard.h"
#include "SecretRare.h"

using namespace std;

int main() {
    cout << boolalpha;

    // GameCard *myCardPtr;
    // myCardPtr = new GameCard("Pikachu", 7, "Electric");

    // GameCard card1("Squirtle", 5, "Water");
    // GameCard card2;

    // cout << "Now we are testing card1 which should be set to 'Squirtle', 5, 'Water'" << endl;
    // cout << "Is card1 name Squirtle? " << (card1.getName() == "Squirtle") << endl;
    // cout << "Is card1 level 5? " << (card1.getLevel() == 5) << endl;
    // cout << "Is card1 type Water? " << (card1.getName() == "Water") << endl;

    // cout << "Now we are testing card2 which should be set to 'unknown', -1, 'unknown'" << endl;
    // cout << "Is card2 name unknown? " << (card2.getName() == "unknown") << endl;
    // cout << "Is card2 level -1? " << (card2.getLevel() == -1) << endl;
    // cout << "Is card2 type unknown? " << (card2.getType() == "unknown") << endl;

    // cout << "Now we are changing the values of card2" << endl;
    // card2.setName("Charmander");
    // card2.setLevel(3);
    // card2.setType("Fire");

    // cout << "Now we are testing card2 which should be set to 'Charmander', 3, 'Fire'" << endl;
    // cout << "Is card2 name Charmander? " << (card2.getName() == "Charmander") << endl;
    // cout << "Is card2 level 3? " << (card2.getLevel() == 3) << endl;
    // cout << "Is card2 type Fire? " << (card2.getType() == "Fire") << endl;

    // cout << "Now we are checking cardPtr which should be set to 'Pikachu', 7, 'Electric'" << endl;
    // myCardPtr->display();
    // cout << endl << "Now we are changing the values of cardPtr" << endl;
    // myCardPtr->setName("Riachu");
    // myCardPtr->setLevel(11);
    // cout << "Is cardPtr name Riachu? " << (myCardPtr->getName() == "Riachu") << endl;
    // cout << "Is cardPtr level 11? " << (myCardPtr->getLevel() == 11) << endl;

    // myCardPtr->display();
    // card1.display();
    // card2.display();

    // cout << "Testing is card1 is equal to card2" << endl;
    // cout << (card1 == card2) << endl;
    // cout << "Setting card1 equal to card2" << endl;
    // card2.setName("Squirtle");
    // card2.setLevel(5);
    // card2.setType("Water");
    // cout << "Testing is card1 is equal to card2" << endl;
    // cout << (card1 == card2) << endl;

    SecretRare *myCardPtr;
    myCardPtr = new SecretRare("Pikachu", 7, "Electric", "Ultra Rare", true);

    SecretRare card1("Squirtle", 5, "Water");
    SecretRare card2;

    myCardPtr->display();
    card1.display();
    card2.display();

    cout << endl << "Testing Accessors" << endl;
    cout << "Does cardPtr return name Pikachu?  " << (myCardPtr->getName() == "Pikachu") << endl;
    cout << "Does cardPtr return level 7?   " << (myCardPtr->getLevel() == 7) << endl;
    cout << "Does cardPtr return type Electric? " << (myCardPtr->getType() == "Electric") << endl;
    cout << "Does cardPtr return rarity Common? " << (myCardPtr->getRarity() == "Common") << endl;
    cout << "Does cardPtr return false (Full Art)?  " << (myCardPtr->getFullArt() == false) << endl;
    cout << "Does cardPtr return rarity Ultra Rare? " << (myCardPtr->getRarity() == "Ultra Rare") << endl;
    cout << "Does cardPtr return true (Full Art)?   " << (myCardPtr->getFullArt() == true) << endl << endl;

    cout << "Does card1 return name Squirtle?  " << (card1.getName() == "Squirtle") << endl;
    cout << "Does card1 return level 5?   " << (card1.getLevel() == 5) << endl;
    cout << "Does card1 return type Water? " << (card1.getType() == "Water") << endl;
    cout << "Does card1 return rarity Common? " << (card1.getRarity() == "Common") << endl;
    cout << "Does card1 return false (Full Art)?  " << (card1.getFullArt() == false) << endl;
    cout << "Does card1 return rarity Ultra Rare? " << (card1.getRarity() == "Ultra Rare") << endl;
    cout << "Does card1 return true (Full Art)?   " << (card1.getFullArt() == true) << endl << endl;

    cout << "Does card2 return name Squirtle?  " << (card2.getName() == "Squirtle") << endl;
    cout << "Does card2 return level 5?   " << (card2.getLevel() == 5) << endl;
    cout << "Does card2 return type Water? " << (card2.getType() == "Water") << endl;
    cout << "Does card2 return rarity Common? " << (card2.getRarity() == "Common") << endl;
    cout << "Does card2 return false (Full Art)?  " << (card2.getFullArt() == false) << endl;
    cout << "Does card2 return rarity Ultra Rare? " << (card2.getRarity() == "Ultra Rare") << endl;
    cout << "Does card2 return true (Full Art)?   " << (card2.getFullArt() == true) << endl << endl;

    cout << "Let's change our 0 argument constructor" << endl;
    card2.setName("Wobbuffet");
    card2.setLevel(17);
    card2.setType("Psychic");
    card2.setRarity("Very Rare");
    card2.setFullArt(true);
    cout << "Card 2 has been changed from 0 arguments to:" << endl;
    card2.display();

    cout << endl << "Testing display methods" << endl;
    cout << "Card 1 will display: " << card1.to_string() << endl;
    card1.display();
    cout << "Card 2 will display: " << card2.to_string() << endl;
    card2.display();
    cout << "CardPtr will display: " << myCardPtr->to_string() << endl;
    myCardPtr->display();

    cout << endl << "Testing base class display method for card 1" << endl;
    card1.GameCard::display();

    cout << endl << "Testing to_string methods" << endl;
    cout << "Does card 1 print out 'Squirtle, 5, Water, Common, 0'? " << (card1.to_string() == "Squirtle, 5, Water, Common, 0") << endl;
    cout << "Does card 2 print out 'Wobbuffet, 17, Psychic, Very Rare, 1'? " << (card2.to_string() == "Wobbuffet, 17, Psychic, Very Rare, 1") << endl;
    cout << "Does cardPtr print out 'Pikachu, 7, Electric, Ultra Rare, 1'? " << (myCardPtr->to_string() == "Pikachu, 7, Electric, Ultra Rare, 1") << endl;
    cout << "Does cardPtr print out 'This That For Testing'? " << (myCardPtr->to_string() == "This That For Testing") << endl;

    cout << endl << "Testing to_string method in base class" << endl;
    cout << "Does card 1 print out 'Squirtle, 5, Water'? " << (card1.GameCard::to_string() == "Squirtle, 5, Water") << endl;

    cout << endl << "Testing == operator for unequal cards" << endl;
    cout << (card1 == card2) << endl;
    card2.setName("Squirtle");
    card2.setLevel(5);
    card2.setType("Water");
    card2.setRarity("Common");
    card2.setFullArt(false);
    cout << "They are now set to equal, let's test again" << endl;
    cout << (card1 == card2) << endl;

    return 0;
}