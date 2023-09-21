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
        for (int i = 0; i < 10; i++) {
        int roll = (rand() % 4) + 1;
        cout << roll << endl;
        if (roll <= (wandPower * 4))
            cout << "hit" << endl;
        else
            cout << "miss" <<  endl;
        }
    }
    else
        cout << "Casted on an unconcious opponent\n";
}