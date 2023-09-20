#include <cstdlib>
#include <iostream>
#include <string>
#include "PlayingCard.h"
#include <cmath>

using namespace std;

PlayingCard::PlayingCard() {
    rank = 0;
    suit = 'X';
    visible = false;
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



int PlayingCard::getRank() const {
    return rank;
}

char PlayingCard::getSuit() const {
    return suit;
}

bool PlayingCard::getVisible() const {
    return visible;
}

void PlayingCard::flipCard() {
    visible = !visible;
}

void PlayingCard::printCard() const {
    string rankName[14] =
        {"ERROR", "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string thisCardRank = rankName[rank];
    string thisCardSuit;
    switch(suit) {
        case 'H':
            thisCardSuit = "Hearts";
            break;
        case 'D':
            thisCardSuit = "Diamonds";
            break;
        case 'C':
            thisCardSuit = "Clubs";
            break;
        case 'S':
            thisCardSuit = "Spades";
            break;
        default:
            thisCardSuit = "ERROR";
    };

    if (!visible) {
        cout << "***hidden***";
    }
    else {
        cout << "The " << thisCardRank << " of " << thisCardSuit;
    }
}