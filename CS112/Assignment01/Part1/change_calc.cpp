// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include "change_calc.h"

using namespace std;

void getChange(int& pennies, int& nickles, int& dimes, int& quarters)
{
    cout << "How many quarters?" << endl;
    cin >> quarters;
    quarters = quarters * 25;

    cout << "How many dimes?" << endl;
    cin >> dimes;
    dimes << dimes * 10;

    cout << "How many nickles?" << endl;
    cin >> nickles;
    nickles = nickles * 5;

    cout << "How many pennies?" << endl;
    cin >> pennies;

    cout << endl;
}

void print(int val)
{
    cout << 
}