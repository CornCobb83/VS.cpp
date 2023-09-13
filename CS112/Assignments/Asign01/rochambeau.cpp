// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb
//Signature: rochambeau: char -> random selection for computer, adjusted score
/* Purpose:
expects a char from the user representing rock, paper, scissors
returns the random generated selection for the computer and
decides who the winner of the match is, then adjusts the
scores accoordingly */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "rochambeau.h"

using namespace std;

void rochambeau()
{
    char input;
    string temp, comp;
    int score = 0, score1 = 0;

    cout << "Enter 'r' (rock), 'p' (paper), 's' (scissors), anything else to quit\n";
    cin >> input;
    tolower(input);

    while ((input == 'r' || input == 'p' || input == 's')||(input == 'R' || input == 'P' || input == 'S'))
    {
        //computer
        int num = (rand() % 3) + 1;
        if (num == 1)
            comp = "rock";
        else if (num == 2)
            comp = "paper";
        else
            comp = "scissors";

        //player
        if (input == 'r' || input == 'R')
            temp = "rock";
        else if (input == 'p' || input == 'P')
            temp = "paper";
        else
            temp = "scissors";

        //output
        cout << "\n(You): " << temp << "  (Computer): " << comp << endl;

        //test for win + score
        if (temp == "rock") {
            if (comp == "rock") {
                cout << "* It's a Draw *";
                score += 0;
            }
            else if (comp == "paper") {
                cout << "* Computer Wins *";
                score1++;
            }
            else {
                cout << "* You Win *";
                score++;
            }
        }
        else if (temp == "paper") {
            if (comp == "paper") {
                cout << "* It's a Draw *";
                score += 0;
            }
            else if (comp == "scissors") {
                cout << "* Computer Wins *";
                score1++;
            }
            else {
                cout << "* You Win *";
                score++;
            }
        }
        else if (temp == "scissors") {
            if (comp == "scissors") {
                cout << "* It's a Draw *";
                score += 0;
            }
            else if (comp == "rock") {
                cout << "* Computer Wins *";
                score1++;
            }
            else {
                cout << "* You Win *";
                score++;
            }
        }
        else {
            cout << "ERROR";
            break;
        }

        //output score
        cout << "\nYour Score: " << score << "  Computer Score: " << score1 << endl;

        cout << "\nEnter 'r' (rock), 'p' (paper), 's' (scissors), anything else to quit\n";
        cin >> input;
        tolower(input);
    }
}