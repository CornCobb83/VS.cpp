// CS 112 Fall 2023 - Week 03 Lab
// Jordan Cobb and Aja Brunet
// Demonstration of Overloading and Call By Reference
/* Signature: passByRefDisplay.cpp(int, double, bool), is a void functions(returns nothing).
    Purpose: Expects to receive values from the calling function and print out the value and
    address using a pass by reference call. With this, the address will not change when being
    printed out, as it calls the value by reference and does not change the address of the value being printed.
    returns nothing as they are void statements */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

// INSERT CODE HERE THAT MEETS LAB REQUIREMENTS
void passByRefDisplay(int& val) {
    cout << "Argument of type int has the value " << val << " at address " << &val << endl;
    return;
}

void passByRefDisplay(double& val) {
    cout << "Argument of type double has the value " << val << " at address " << &val << endl;
    return;
}

void passByRefDisplay(bool& val) {
    cout << "Argument of type bool has the value " << val << " at address " << &val << endl;
    return;
}


