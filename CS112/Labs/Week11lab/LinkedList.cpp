//    CS 112 Fall 2023 - Week 11 Lab
//    C++ Container Class LinkedList
//
//    David C. Tuttle
//    Last Modified: 31 Oct 2023

#include <cstdlib>
#include <iostream>
#include <string>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

// CONSTRUCTORS

// Constructor for a new empty Linked List
LinkedList::LinkedList() {
    headPtr = NULL;
}

// Constructor for a new Linked List with one Node
LinkedList::LinkedList(int firstValue) {
    Node *firstNodePtr = new Node(firstValue);
    headPtr = firstNodePtr;
}

// DESTRUCTOR
LinkedList::~LinkedList() {
    // Start at the head of the list
    Node *currentPtr = headPtr;
    Node *tempPtr;
    // "Walk" through the list, deleting Nodes
    // along the way
    while (currentPtr != NULL) {
        tempPtr = currentPtr->getNextPtr();
        delete currentPtr;
        currentPtr = tempPtr;
    }
}

// ACCESSORS

Node* LinkedList::getHeadPtr() const {
    return headPtr;
}

// MUTATORS

void LinkedList::addToHead(int newValue) {
    // First, create a new Node for the list
    Node *newNodePtr = new Node(newValue);
    // Next, have new Node point to current head
    newNodePtr->setNextPtr(headPtr);
    // Then, set headPtr to point to new Node
    headPtr = newNodePtr;
}

// Other methods

void LinkedList::display() {
    if (headPtr == NULL) {
        cout << "LIST IS EMPTY" << endl;
        return;
    }

    Node* currentPtr = headPtr;
    while (currentPtr != NULL) {
        currentPtr->display();
        currentPtr = currentPtr->getNextPtr();
    }
}

// METHODS TO BE WRITTEN FOR LAB

int LinkedList::listLength() const {
    return 0;  // REMOVE THIS LINE
}

int LinkedList::getValueAt(int nodePosition) const {
    return 0;  // REMOVE THIS LINE
}

bool LinkedList::addNodeAfter(int nodePosition, int newValue) {
    return false;  // REMOVE THIS LINE
}

bool LinkedList::removeNodeAt(int nodePosition) {
    return false;  // REMOVE THIS LINE
}

