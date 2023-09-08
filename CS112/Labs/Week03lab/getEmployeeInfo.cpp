// CS 112 Fall 2023 - Week 03 Lab
// Jordan Cobb and Aja Brunet
// Demonstration of Overloading and Call By Reference
/*Signature: getEmployeeInfo.cpp(string, int, double, bool), is
    a void functions(returns nothing).
    Purpose: EXPECTS: information(in form of all expression types) from an employee through input, then apply those to their
    respective variables. Then modify them in the calling function so in main.cpp
    everything*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;


void getEmployeeInfo(string& name, int& age, double& salary, bool& exempt) {
    // INSERT CODE HERE THAT MEETS LAB REQUIREMENTS
    char ifExempt;

    cout << "Enter employee name: " << endl;
    getline(cin, name);
    cout << "Enter employee age: " << endl;
    cin >> age;
    cout << "Enter employee salary: " << endl;
    cin >> salary;
    cout << "Enter T if you are exempt or F if you are not exempt from overtime." << endl;
    cin >> ifExempt;

    if ((ifExempt == 'F')||(ifExempt == 'f')){
        exempt = false;
    }
    else if ((ifExempt == 'T')||(ifExempt == 't')){
        exempt = true;
    }
    else
    {

        exempt = false;
    }

    return;
}
