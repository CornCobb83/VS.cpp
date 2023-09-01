// CS 112 Fall 2023 Week 02 Lab

// Jordan Cobb and Aja Brunet

/*----
  signature: descr_letter_grade: string -> string
  purpose: expects a letter grade (in the form of a string)
      that may include + or -, and returns a text description
      of that grade. Letter grades supported are A, B, C,
      and descriptions are inspired by those on p. 46 of
      the 2020-2021 Humboldt Catalog, followed by " - Plus" if letter
      grade is followed by + and followed by " - Minus" if letter
      grade is followed by -

      (Any grade that does not start with
      A, B, or C will return a description of "Try again", followed by
      " - Plus" if followed by + and " - Minus" if followed by -.)

      (If letter grades are longer than 2 characters, the rest are ignored;
      if the letter grade is followed by anything but + or -, that also
      is ignored.)

  tests:
      descr_letter_grade("A+") == "Outstanding achievement - Plus"
      descr_letter_grade("a") == "Outstanding achievement"
      descr_letter_grade("B") == "Good Enough achievement"
      descr_letter_grade("b-") == "Good Enough achievement - Minus"
      descr_letter_grade("c") == "Satisfactory achievement"
      descr_letter_grade("C-") == "Satisfactory achievement - Minus"
      descr_letter_grade("d") == "Sub Par achievement"
      descr_letter_grade("D-") == "Sub Par achievement - Minus"
      descr_letter_grade("G") == "Try again"
      descr_letter_grade("H+") == "Try again - Plus"
      descr_letter_grade("What?") == "Try again"
      descr_letter_grade("Awwww!") == "Outstanding achievement"
      descr_letter_grade("B+C") == "Commendable achievement - Plus"

  by: David C. Tuttle
  last modified: 31 August 2023
----*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void string descr_grade(string s);

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
            grade_descr = "Good Enough achievement";
            break;

        case 'd':
        case 'D':
            grade_descr = "Sub Par achievement";
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

descr_grade(s)
{
    cout << "Test";
}