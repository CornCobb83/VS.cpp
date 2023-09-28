// CS 112 Fall 2023 – Assignment #2
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "duel.h"

using namespace std;

// Function takes in two variables and returns bool status:
//opponentActive & wandpower -> opponentactive (true/ false)

void spell(bool& opponentActive, double wandPower)
{
    if (opponentActive) {
        int roll = (rand() % 4) + 1;
        //cout << roll << endl;
        if (roll <= (wandPower * 4)) {
            opponentActive = false;
            //cout << "hit\n";
        }
        //else
            //cout << "miss\n";
        }
    else
        cout << "Casted on an unconcious opponent\n";
}

// Function has no input, and returns an integer (1, 2, 3)
// Runs the program until 2/3 bools values are set to flase

int startDuel()
{
    bool angela = true;
    bool cedric = true;
    bool eloise = true;

    while ((angela && cedric) || (angela && eloise) || (cedric && eloise)) {

        if ((angela) && (eloise))
            spell(eloise, ANGELA_WANDPOWER);
        else if ((angela) && (cedric))
            spell(cedric, ANGELA_WANDPOWER);

        if ((cedric) && (eloise))
            spell(eloise, CEDRIC_WANDPOWER);
        else if ((cedric) && (angela))
            spell(angela, CEDRIC_WANDPOWER);

        if ((eloise) && (cedric))
            spell(cedric, ELOISE_WANDPOWER);
        else if ((eloise) && (angela))
            spell(angela, ELOISE_WANDPOWER);
    }

    if (angela)
        return 1;
    if (cedric)
        return 2;
    if (eloise)
        return 3;

return 0;
}