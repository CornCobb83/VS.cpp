#include <cstdlib>
#include <iostream>
#include <string>
#include "PlayingCard.h"

using namespace std;

int main()
{
    cout << boolalpha;

    PlayingCard fred;

    cout << "fred has rank " << fred.getRank() << endl
        << "fred had suit " << fred.getSuit() << endl
        << "Is fred visible? " << fred.getVisible() << endl;

    PlayingCard wilma(8, 'H');

    cout << "wilma has rank " << wilma.getRank() << endl
        << "wilma had suit " << wilma.getSuit() << endl
        << "Is wilma visible? " << wilma.getVisible() << endl;

    PlayingCard barney(11, 'C', true);

    cout << "barney has rank " << barney.getRank() << endl
        << "barney had suit " << barney.getSuit() << endl
        << "Is barney visible? " << barney.getVisible() << endl;

    barney.flipCard();

    cout << "barney has rank " << barney.getRank() << endl
        << "barney had suit " << barney.getSuit() << endl
        << "Is barney visible? " << barney.getVisible() << endl;

    return 0;
}