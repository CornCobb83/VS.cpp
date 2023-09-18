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
    if (a_suit != 'H' && a_suit != 'D' && a_suit != 'S' && a_suit != 'C') {
        cout << "*** ILLEGAL SUIT - SETTING TO X ***" << endl;
        suit = 'X';
    }
    else {
        suit = a_suit;
    }

    visible = false;
}

PlayingCard::PlayingCard(int a_rank, char a_suit, bool is_visible) {
    if ((a_rank < 1) || (a_rank > 13)) {
        cout << "*** ILLEGAL RANK - SETTING TO 0 ***" << endl;
        rank = 0;
    }
    else {
        rank = a_rank;
    }
    if (a_suit != 'H' && a_suit != 'D' && a_suit != 'S' && a_suit != 'C') {
        cout << "*** ILLEGAL SUIT - SETTING TO X ***" << endl;
        suit = 'X';
    }
    else {
        suit = a_suit;
    }

    visible = true;
}