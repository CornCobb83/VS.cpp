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

    double win1 = 0.00, win2 = 0.00, win3 = 0.00;

    cout << "How many duels would you like to create?\n";
    int count;
    cin >> count;
    cout << endl;
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            int duel = startDuel(angelaActive, cedricActive, eloiseActive, ANGELINA_WANDPOWER, CEDRIC_WANDPOWER, ELOISE_WANDPOWER);
            cout << duel << endl;

            // For me to evaluate win %s
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

    win1 = (win1 / (count + 0.00)) * 100;
    win2 = (win2 / (count + 0.00)) * 100;
    win3 = (win3 / (count + 0.00)) * 100;

    cout << fixed << setprecision(0) << "Angela: " << win1 << "%   " << "Cedric: " << win2 << "%   " << "Eloise: " << win3 << "%\n";

    //spell(eloiseActive, ELOISE_WANDPOWER);

    return 0;
}