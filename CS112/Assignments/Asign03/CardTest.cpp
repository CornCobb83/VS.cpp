#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "GameCard.h"

using namespace std;

int main() {

    GameCard *myCardPtr;
    myCardPtr = new GameCard("Pikachu", 7, "Electric");

    GameCard card1;

    
    card1.display();

    return 0;
}