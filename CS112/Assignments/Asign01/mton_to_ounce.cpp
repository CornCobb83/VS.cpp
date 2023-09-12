// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "mton_to_ounce.h"

using namespace std;

void mton_to_ounce()
{
    double tons = 0;
    while (tons >= 0)
    {
        cout << "Enter a weight in tons (negative to exit)\n";
        cin >> tons;
        if (tons >= 0)
            cout << tons << " tons is " << (35273.92) * tons << " ounces\n";
    }
}
