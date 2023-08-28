//Wordle

#include <cstdlib>
#include <string>
#include <iostream>
#include "letter_match.h"

using namespace std;

int main()
{
    cout << boolalpha;

    cout << "*** TESTING letter_mathch ***" << endl;

    cout << (letter_match("guess", "grass", 3) returns true) << endl;
    cout << (letter_match("guess", "grass", 2) returns false) << endl;

    return EXIT_SUCCESS;
}