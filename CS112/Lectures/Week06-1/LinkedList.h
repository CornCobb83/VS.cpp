// CS 112 Fall 2023 Week 11-1 Lecture
// Demonstration of C++ Collection Class

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "LinkedList.h"

using namespace std;

class LinkedList {
public:
    // Constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Mutators
    void addToList(double x, double y);

    // Other Methods
    void display();

protected:

private:

    Node *headPtr;

};

#endif