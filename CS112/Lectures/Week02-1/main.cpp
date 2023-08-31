//Wordle

#include <iostream>
#include <cstdlib>
#include <string>
#include "letter_match.h"
#include "letter_elsewhere.h"

using namespace std;

int main()
{
    cout << boolalpha;

    cout << "*** TESTING letter_mathch ***" << endl;

    cout << (letter_match("guess", "grass", 3) == true) << endl;
    cout << (letter_match("guess", "grass", 2) == false) << endl;

    cout << (letter_elsewhere("abcde", "bcdef", 3) == true) << endl;
    cout << (letter_elsewhere("abcde", "bcdef", 2) == false) << endl;
    cout << (letter_elsewhere("abcde", "bcdef", 4) == true) << endl;

    return 0;
}