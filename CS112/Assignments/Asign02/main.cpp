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

    int win1 = 0, win2 = 0, win3 = 0;

    cout << "How many duels would you like to create?\n";
    int count;
    cin >> count;
    cout << endl;
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            int duel = startDuel(angelaActive, cedricActive, eloiseActive, ANGELINA_WANDPOWER, CEDRIC_WANDPOWER, ELOISE_WANDPOWER);
            cout << startDuel(angelaActive, cedricActive, eloiseActive, ANGELINA_WANDPOWER, CEDRIC_WANDPOWER, ELOISE_WANDPOWER) << endl;
            if (duel == 1)
                win1++;
            else if (duel == 2)
                win2++;
            else
                win3++;
        }
    }
    else
        cout << "Invalid input\n";

    cout << win1 << "%   " << win2 << "%   " << win3 << "%\n";

    //spell(eloiseActive, ELOISE_WANDPOWER);

    return 0;
}