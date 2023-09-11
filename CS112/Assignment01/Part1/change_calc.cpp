// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "change_calc.h"

using namespace std;

void change_calc(int& pennies, int& nickles, int& dimes, int& quarters)
{
    quarters = quarters * 25;
    //cout << quarters << endl;

    dimes = dimes * 10;
    //cout << dimes << endl;

    nickles = nickles * 5;
    //cout << nickles << endl;

    //cout << pennies << endl;

    cout << endl;
}