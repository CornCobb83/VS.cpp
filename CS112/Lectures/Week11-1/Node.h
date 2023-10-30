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
    GraphPoint getNodeData() const;
    Node *getNextPtr() const;

    // Mutators
    void setNodeData(const GraphPoint& newGraphPoint);

    // Other Methods
    void display();
    string to_string();

private:
    // Mutators
    void setNextPtr(Node *newNextPtr);

    // Data Members
    GraphPoint nodeData;

};

#endif