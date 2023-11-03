//    CS 112 Fall 2023 - Week 11 Lab
//    C++ Container Class LinkedList
//
//    David C. Tuttle
//    Last Modified: 31 Oct 2023

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

class LinkedList {
public:

    LinkedList();
    LinkedList(Node *firstNodePtr);

    Node* getHeadPtr();

    void addToHead(Node *newNodePtr);

    void display();

    // METHODS TO BE WRITTEN IN LAB

    int listLength() const;
    int getValueAt(int nodePosition) const;
    bool addNodeAfter(int nodePosition, Node *newNodePtr);
    bool removeNodeAt(int nodePosition);

private:

    Node *headPtr;

};  // <-- remember the semicolon!

#endif /* LINKEDLIST_H */
