#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

    class PlayingCard {
        public:

        //CONSTRUCTORS
        PlayingCard();
        PlayingCard(int a_rank, char a_suit);
        PlayingCard(int a_rank, char a_suit, bool is_visible);

        //ACCESSORS
        int getRank () const;
        char getSuit() const;
        bool getVisible() const;

        //MUTATORS
        void flipCard();

        void printCard();

        private:

        int rank;
        char suit;
        bool visible;

    };

#endif