// CS 112 Fall 2023 - Week 04 Lab
// Demonstration of C++ struct and Use of Pointers
// Jordan Cobb and Aja Brunet
// Signature: getStudentInfo Student& -> void
/* Expects a Student struct using call by reference
Returns nothing
Side effects: Asks user for values to be placed into
the data members of the Student struct
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void getStudentInfo(Student& a_student)
{
    getline(cin, a_student.name);
    cout << "Student name: ";
    getline (cin, a_student.name);
    cout << "Student ID Number: ";
    cin >> a_student.id;
    for (int i = 1; i <= 3; i++) {
        cout << "Enter grade for assignment #" << i << ": ";
        cin >> a_student.grade[i-1];
    }
    cout << endl;
}

void printStudentInfo(Student& a_student, int size) {
    cout << "***STUDENT INFO***" << endl;
    cout << "Name:   " << a_student.name << endl;
    cout << "ID#:    " << a_student.id << endl;
    cout << "Grades: ";
    for (int i = 1; i <= 3; i++) {
        cout << a_student.grade[i-1] << "   ";
        }
    cout << "\n******************\n";
}