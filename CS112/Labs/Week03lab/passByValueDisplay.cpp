// CS 112 Fall 2023 - Week 03 Lab
// Jordan Cobb and Aja Brunet
// Demonstration of Overloading and Call By Reference
/* *Signature: passByValueDisplay.cpp(int, double, bool), is a void functions(returns nothing).
    Purpose: to use values of different types in their respective pass by value functions.
    Then to print out tat argument with it address, representing that the address is different
    when a function passes by value, as it makes a copy of the value to print.
    returns nothing as they are void statements */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

// INSERT CODE HERE THAT MEETS LAB REQUIREMENTS
void passByValueDisplay(int val) {
    cout << "Argument of type int has the value " << val << " at address " << &val << endl;
    return;
}

void passByValueDisplay(double val) {
    cout << "Argument of type double has the value " << val << " at address " << &val << endl;
    return;
}

void passByValueDisplay(bool val) {
    cout << "Argument of type bool has the value " << val << " at address " << &val << endl;
    return;
}


