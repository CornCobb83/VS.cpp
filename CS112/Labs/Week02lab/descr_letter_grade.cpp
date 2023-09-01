// CS 112 Fall 2023 Week 02 Lab

// Jordan Cobb and Aja Brunet

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string descr_letter_grade(string letter_grade) {
    string grade_descr = "";

    // build beginning of description based on first char in
    //     given letter grade

    switch( letter_grade.at(0) ) {
        case 'a':
        case 'A':
            grade_descr = "Outstanding achievement";
            break;

        case 'b':
        case 'B':
            grade_descr = "Commendable achievement";
            break;

        case 'c':
        case 'C':
            grade_descr = "Satisfactory achievement";
            break;

        default:
            grade_descr = "Try again";
    }

    // add on additional ending if letter grade includes + or -
    // Note the need to check whether the string has more than
    // one character - if it doesn't, then .at(1) would throw
    // an error and stop execution

    if (letter_grade.length() > 1) {
        if (letter_grade.at(1) == '+') {
            grade_descr += " - Plus";
        }
        else if (letter_grade.at(1) == '-') {
            grade_descr += " - Minus";
        }
    }

    return grade_descr;
}