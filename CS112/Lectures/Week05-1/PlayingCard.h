#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

    class PlayingCard {
        public:

        PlayingCard();
        PlayingCard(int a_rank, char a_suit);
        PlayingCard(int a_rank, char a_suit, bool is_visible);

        int getRank();
        char getSuit();
        bool getVisible();

        private:

        int rank;
        char suit;
        bool visible;

    };

#endif