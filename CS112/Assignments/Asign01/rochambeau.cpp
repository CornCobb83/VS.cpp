// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "rochambeau.h"

using namespace std;

void rochambeau()
{
    string input, temp, comp;

    cout << "Enter 'r' (rock), 'p' (paper), 's' (scissors), anything else to quit";
    gettline(cin,);

    while ((input == "r" || input == "p" || input == "s"))
    {
        //computer
        int num = (rand() % 3) + 1;
        if (num == 1)
            comp == "rock";
        else if (num == 2)
            comp == "paper";
        else
            comp == "scissors";

        //player
        if (input == "r")
            temp = "rock";
        else if (input == "p")
            temp = "paper";
        else
            temp = "scissors";

        //output
        cout << "(You): " << temp << "(Computer): " << comp;

        cout << "Enter 'r' (rock), 'p' (paper), 's' (scissors), anything else to quit";
        cin >> input;
    }
}