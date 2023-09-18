// CS 112 Fall 2023 - Week 04 Lab
// Demonstration of C++ struct and Use of Pointers
// Jordan Cobb and Aja Brunet

#include <cstdlib>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    cout << boolalpha;
    int student_count;
    Student *myArray;

    cout <<"How many students would you like to enter? ";
    cin >> student_count;
    myArray = new Student[student_count];

    for (int i = 0; i < student_count; i++) {
        getStudentInfo(myArray[i]);
    }

    for (int i = 0; i < student_count; i++) {
        printStudentInfo(myArray[i], student_count);
    }

    delete [] myArray;

    return EXIT_SUCCESS;
}