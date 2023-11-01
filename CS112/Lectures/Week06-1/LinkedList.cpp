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

// Destructor
LinkedList::~LinkedList() {
    if (headPtr == NULL) {
        return;
    }
    Node *currentPtr = headPtr->getNextPtr();
    delete headPtr;
    cout << "BOOM! ";
    Node *tempPtr;
    while (currentPtr != NULL) {
        tempPtr = currentPtr;
        currentPtr = currentPtr->getNextPTr();
        delete tempPtr;
        cout << "BOOM! ";
    }
    cout << endl;
}

// Mutators

void LinkedList::addToList(double x, double y) {
    GraphPoint newPoint(x, y);
    Node *newNodePtr;
    newNodePtr = new Node(newPoint);
    // Now to insert that node into the list
    newNodePtr->setNextPtr(headPtr);
    headPtr = newNodePtr;
}

void LinkedList::display() {
    if (headPtr == NULL) {
        cout << "* NO ITEMS IN LIST *" << endl;
        return;
    }
    Node *currentNodePtr = headPtr;
    cout << "Start at ";
    (currentNodePtr->getNodeData()).display();
    cout << endl;
    currentNodePtr = currentNodePtr->getNextPtr();
    while (currentNodePtr != NULL) {
        cout << endl << "   points to ";
        (currentNodePtr->getNodeData()).display();
        currentNodePtr = currentNodePtr->getNextPtr();
    }
    cout << "   and that's all!" << endl;
}