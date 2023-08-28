//Wordle

#include <iostream>
#include <cstdlib>
#include <string>
#include "letter_match.h"

using namespace std;

int main()
{
    cout << boolalpha;

    cout << "*** TESTING letter_mathch ***" << endl;

    cout << (letter_match("guess", "grass", 3) == true) << endl;
    cout << (letter_match("guess", "grass", 2) == false) << endl;

    return 0;
}