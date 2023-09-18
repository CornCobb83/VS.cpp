#include <cstdlib>
#include <iostream>
#include <string>
#includde "PlayingCard.h"

using namespace std;

PlayigCard::PlayingCard() {
}

PlayingCard::PlayingCard(int a_rank, char a_suit) {
    if ((a_rank < 1) || (a_rank > 13)) {
        cout << "*** ILLEGAL RANK - SETTING TO 0 ***" << endl;
        rank = 0;
    }
    else {
        rank = a_rank;
    }
    if (suit != 'H' && suit != 'D' && suit != 'S' && suit != 'C') {
        cout << "*** ILLEGAL SUIT - SETTING TO X ***" << endl;
        suit = 'X';
    }
    else {
        suit = a_suit;
    }
    
    viaible = false
}