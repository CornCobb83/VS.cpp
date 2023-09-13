// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb
//Signature: prime_generator: int -> ints as cout statement
/* Purpose:
expects an integer from the user between 2 and max int value
returns list of prime numbers between 2 and desired input */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "prime_generator.h"

using namespace std;

void prime_generator()
{
    int num;
    cout << "Enter a possitive integer\n";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        if (i == 2 || i == 3 || i == 5 || i == 7)
            cout << i << " ";
        else if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0))
            cout << "";
        else
            cout << i << " ";
    }
    cout << endl;
}