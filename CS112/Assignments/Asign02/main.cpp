// CS 112 Fall 2023 – Assignment #2
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "duel.h"

using namespace std;
int main() {
    srand(time(NULL));

    double ANGELINA_WANDPOWER = 0.25;
    double CEDRIC_WANDPOWER = 0.50;
    double ELOISE_WANDPOWER = 0.75;

    bool angelaActive = true;
    bool cedricActive = true;
    bool eloiseActive = true;

    startDuel();
    spell(eloiseActive, ELOISE_WANDPOWER);

    return 0;
}