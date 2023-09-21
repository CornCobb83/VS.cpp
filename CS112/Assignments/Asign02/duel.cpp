// CS 112 Fall 2023 – Assignment #2
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "duel.h"

using namespace std;

void spell(bool& opponentActive, double wandPower)
{
    if (opponentActive) {
        int roll = (rand() % 4) + 1;
        cout << roll << endl;
        if (roll <= (wandPower * 4)) {
            cout << "hit\n";
            opponentActive = false;
        }
        else
            cout << "miss\n";
        }
    else
        cout << "Casted on an unconcious opponent\n";
}

int startDuel(bool& angela, bool& cedric, bool& eloise, double angelaW, double cedricW, double eloiseW)
{
    int count = 3, winner = 0;
    while ((angela && cedric) || (angela && eloise) || (cedric && eloise)) {
        if ((angela) && (eloise))
            spell(eloise, angelaW);
        else if ((angela) && (cedric))
            spell(cedric, angelaW);

        if ((cedric) && (eloise))
            spell(eloise, angelaW);
        else if ((cedic) && (cedric))
            spell(cedric, angelaW);
    }
    return winner;
}