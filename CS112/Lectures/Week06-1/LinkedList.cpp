// CS 112 Fall 2023 Week 11-1 Lecture
// Demonstration of C++ Collection Class

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "GraphPoint.h"
#include "Node.h"
#include "LinkedList.h"

using namespace std;

// Constructors

LinkedList::LinkedList() {
    headPtr = NULL;
}

// Mutators

LinkedList::addToList(double x, double y) {
    GraphPoint newPoint(x, y);
    Node *newNode;
    newNode = new Node(newPoint);
    // Now to insert that node into the list
    
}