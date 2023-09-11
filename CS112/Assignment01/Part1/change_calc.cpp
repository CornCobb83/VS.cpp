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
    nickles = nickles * 5;

    cout << "How many dimes?" << endl;
    cin >> dimes;
    dimes << dimes * 10;

    cout << "How many quarters?" << endl;
    cin >> quarters;
    quarters = quarters * 25;

    cout << endl;
}

void print(int val)
{
    string temp = to_string(val);

    if (temp.length() == 3)
        cout << "$" << temp.at(0) << "." << temp.at(1) << temp.at(2) << endl;
}