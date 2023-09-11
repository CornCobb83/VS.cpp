// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include "change_calc.h"

using namespace std;

void getChange(int& pennies, int& nickles, int& dimes, int& quarters)
{
    cout << "How many pennies?" << endl;
    cin >> pennies;
    cout << "How many nickles?" << endl;
    cin >> nickles;
    cout << "How many dimes?" << endl;
    cin >> dimes;
    cout << "How many quarters?" << endl;
    cin >> quarters;
    cout << endl;
}