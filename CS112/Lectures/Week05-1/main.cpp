#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "PlayingCard.h"

using namespace std;

int main()
{
    cout << boolalpha;
    srand(time(NULL));

    PlayingCard fred;

    cout << "fred has rank " << fred.getRank() << endl
        << "fred had suit " << fred.getSuit() << endl
        << "Is fred visible? " << fred.getVisible() << endl;

    PlayingCard wilma(8, 'H');

    cout << "wilma has rank " << wilma.getRank() << endl
        << "wilma had suit " << wilma.getSuit() << endl
        << "Is wilma visible? " << wilma.getVisible() << endl;

    PlayingCard barney(11, 'C', true);

    // cout << "barney has rank " << barney.getRank() << endl
    //     << "barney had suit " << barney.getSuit() << endl
    //     << "Is barney visible? " << barney.getVisible() << endl;

    cout << "The card barney is ";
    barney.printCard();
    cout << endl;

    barney.flipCard();

    // cout << "barney has rank " << barney.getRank() << endl
    //     << "barney had suit " << barney.getSuit() << endl
    //     << "Is barney visible? " << barney.getVisible() << endl;

    cout << "The card barney is ";
    barney.printCard();
    cout << endl;

    PlayingCard randomCard1(true);
    PlayingCard randomCard2(true);
    PlayingCard randomCard3(true);
    PlayingCard randomCard4(true);
    PlayingCard randomCard5(true);

    randomCard1.printCard();
    cout << endl;
    randomCard2.printCard();
    cout << endl;
    randomCard3.printCard();
    cout << endl;
    randomCard4.printCard();
    cout << endl;
    randomCard5.printCard();
    cout << endl;

    return 0;
}