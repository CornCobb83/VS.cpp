//    CS 112 Fall 2023 - Week 11 Lab
//    C++ Container Class LinkedList
//
//    Jordan Cobb and Aja Brunet
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
LinkedList::LinkedList(Node *firstNodePtr) {
    headPtr = firstNodePtr;
}

// Accessor

Node* LinkedList::getHeadPtr() {
    return headPtr;
}

// Mutator

void LinkedList::addToHead(Node *newNodePtr) {
    // First, have new Node point to current head
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
        cout << "Visiting a Node: " << endl;
        currentPtr->display();
        currentPtr = currentPtr->getNextPtr();
    }
}

// METHODS TO BE WRITTEN FOR LAB

int LinkedList::listLength() const {
    if(headPtr == NULL) {
        return 0;
    }
    int length = 1;
    Node *currentNodePtr = headPtr;
    currentNodePtr = currentNodePtr->getNextPtr();
    while (currentNodePtr != NULL) {
        length++;
        currentNodePtr = currentNodePtr->getNextPtr();
    }
    return length;
}

int LinkedList::getValueAt(int nodePosition) const {
    if (headPtr == NULL) {
        return -99999;
    }

    int length = 1;
    Node *currentNodePtr = headPtr;
    if (nodePosition > listLength())
        return false;

    while (currentNodePtr != NULL) {
        if (length == nodePosition) {
            return currentNodePtr->getNodeData();
        }

        length++;
        currentNodePtr = currentNodePtr->getNextPtr();
    }
    return -99999;
}

bool LinkedList::addNodeAfter(int nodePosition, int newValue) {
    Node *currentNodePtr = headPtr;
    int length = 1;
    if (nodePosition > listLength())
        return false;

    while (currentNodePtr != NULL) {
        if (length == nodePosition) {
            currentNodePtr = setNodeData(newValue);
            for (int i = length; i < listlength() + 1; i++) {
                
            }
        }

        length++;
        currentNodePtr = currentNodePtr->getNextPtr();
    }

    return false;
}

bool LinkedList::removeNodeAt(int nodePosition) {
    return false;  // REMOVE THIS LINE
}

