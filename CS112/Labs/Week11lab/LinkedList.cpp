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
    int length = 0;
    Node *currentNodePtr = headPtr;

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
        return -99999;

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
    if (nodePosition < 0 || nodePosition > listLength() - 1)
        return false;

    Node *newNode = new Node(newValue);
    if (nodePosition == 0) {
        newNode->setNextPtr(headPtr);
        headPtr = newNode;
        return true;
    }

    Node *currentNodePtr = headPtr;
    int length = 1;

    while (currentNodePtr != NULL) {
        if (length == nodePosition) {
            newNode->setNextPtr(currentNodePtr->getNextPtr());
            currentNodePtr->setNextPtr(newNode);
            return true;
        }

        length++;
        currentNodePtr = currentNodePtr->getNextPtr();
    }

    return false;
}

bool LinkedList::removeNodeAt(int nodePosition) {
    if (nodePosition < 0 || nodePosition >= listLength())
        return false;

    if (nodePosition == 0) {
        Node *deleteNode = headPtr;
        headPtr = headPtr->getNextPtr();
        delete deleteNode;
        return true;
    }

    Node *currentNodePtr = headPtr;
    int length = 1;

    while (currentNodePtr != NULL) {
        if (length + 1 == nodePosition) {
            Node *deleteNode = currentNodePtr->getNextPtr();
            currentNodePtr->setNextPtr(deleteNode->getNextPtr());
            delete deleteNode;
            return true;
        }

        length++;
        currentNodePtr = currentNodePtr->getNextPtr();
    }

    return false;
}