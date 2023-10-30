// CS 112 Fall 2023 Week 011-1 Lecture

#ifndef NODE_H
#define NODE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

// Constant declarations in class
const Node* DEFAULT_PTR = NULL;

class Node {
public:

    // Constructors
    Node();
    Node(GraphPoint gp);
    Node(GraphPoint gp, Node *nextPtr);

    // Accessors
    GraphPoint getPoint() const;
    GraphPoint *getNextPtr() const;

    // 

private:

};

#endif