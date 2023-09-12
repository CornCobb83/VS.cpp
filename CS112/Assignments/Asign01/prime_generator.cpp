// CS 112 Fall 2023 – Assignment #1
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "prime_generator.h"

using namespace std;

void prime_generator()
{
    int num;
    cout << "Enter a num\n";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        if (i == 2)
            cout << 2 << " ";
        else if (i == 3)
            cout << 3 << " ";
        else if (i == 5)
            cout << 5 << " ";
        else if (i == 7)
            cout << 7 << " ";
        
    }

}