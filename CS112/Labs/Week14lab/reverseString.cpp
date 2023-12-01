// CS 112 Fall 2023 - Week 14 Lab
//  C++ Vectors
// Jordan Cobb and Aja Brunet

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "reverseString.h"

using namespace std;

char letter;

void reverseString() {
    char array[10];
    int size = 0;
    cout << "Enter letters one by one. (max 10)" << endl;
    cin >> letter;
    while (letter != '.' && size < 10) {
        array[size] = letter;
        size++;
        cin >> letter;
    }

    for (int i = size; i >= 0; i--) {
        cout << array[i];
    }

    cout << endl;
}

void reverseStringVector() {
    vector<char> vector;
    char letter;
    int capacity = 10;
    cout << "Enter letters one by one." << endl;
    cin >> letter;
    while (letter != '.' && vector.size() < capacity) {
        vector.push_back(letter);
        cin >> letter;
    }
    for (int i=vector.size(); i < vector.size(); i++) {

    }
}
