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

    return 0;
}