// CS 112 Fall 2023 – Assignment #1 Part 1
// Jordan Cobb
//Signature: change_calc: int -> double
/* Purpose:
expects 4 int inputs passed through the function
returns a double after altering the ints */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "change_calc.h"

using namespace std;

double change_calc(int quarters, int dimes, int nickles, int pennies)
{
    quarters = quarters * 25;
    //cout << quarters << endl;

    dimes = dimes * 10;
    //cout << dimes << endl;

    nickles = nickles * 5;
    //cout << nickles << endl;

    double total = quarters + dimes + nickles + pennies + 0.00;

    total = total / 100;

    return total;
}