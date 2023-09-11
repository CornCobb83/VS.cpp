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
    string temp = to_string(val);

    if (temp.length() >= 3)
        cout << "$" << temp.substr(0, temp.length()-3) << "." << temp.at(temp.length()-2) << temp.at(temp.length()-1) << endl;
    else if (temp.length() == 2)
        cout << "$0." << temp.at(0) << temp.at(1) << endl;
    else
        cout << "$0.0" << temp.at(0) << endl;
}