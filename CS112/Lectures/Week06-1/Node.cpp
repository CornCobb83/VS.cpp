// CS 112 Fall 2023 Week 11-1 Lecture
// Demonstration of C++ Collection Class

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "GraphPoint.h"
#include "Node.h"

using namespace std;

// CONSTRUCTORS

// The zero-argument constructor creates a Node with
// GraphPoint (0,0) and pointer NULL

Node::Node() {
    // Do we need to write = operator for GraphPoint?
    // No, because it's a "Big 3" method!
    nodeData = GraphPoint();
    nextPtr = NULL;
}

Node::Node(GraphPoint gp): nodeData(gp) {
    nextPtr = NULL;
}

Node::Node(GraphPoint gp, Node *ptr):
           nodeData(gp), nextPtr(ptr) {
}

// ACCESSORS

GraphPoint Node::getNodeData() const {
    return nodeData;
}

Node *Node::getNextPtr() const {
    return nextPtr;
}

// MUTATORS

void Node::setNodeData(GraphPoint& newNodeData) {
    nodeData = newNodeData;
}

void Node::setNextPtr(Node *newNextPtr) {
    nextPtr = newNextPtr;
}

// OTHER METHODS

void Node::display() {
    cout << "Node at address " << this
         << " points to " << nextPtr << " and contains ";
    nodeData.GraphPoint::display();
}

string Node::to_string() {
    // NOTE: In order to print a pointer's address in a string,
    //       I had to do some weird, funky things :-) and it prints
    //       the pointer's address in decimal instead of hex...

    string address = std::to_string((unsigned long long)(void**)this);
    return nodeData.GraphPoint::to_string() + "," + address;
}