// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include "change_calc.h"

using namespace std;

int main()
{
    int pennies = 0, nickles = 0, dimes = 0, quarters = 0;

    getChange(pennies, nickles, dimes, quarters);

    cout << pennies + nickles + dimes + quarters << endl;

    return 0;
}