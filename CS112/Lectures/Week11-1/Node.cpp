// CS 112 Fall 2023 Week 011-1 Lecture

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Node.h"

using namespace std;

// Constructors
Node::Node() {
    nodeData = GraphPoint();
    nextPtr = DEFAULT_PTR;
}

Node::Node(GraphPoint gp) : nodeData(gp) {
    nextPtr = DEFAULT_PTR;
}

Node::Node(GraphPoint gp, Node *ptr) : nodeData(gp), nextPtr(ptr) {}

// Accessors
GraphPoint Node::getNodeData() {
    return nodeData;
}

Node *Node::getNextPtr() {
    return nextPtr
}

// Mutators
void Node::setNodeData(GraphPoint newNodeData) {
    nodeData = newNodeData;
}

void Node::setNextPtr(const Node *newNextPtr) {
    nextPtr = newNextPtr;
}

// Other Methods
void Node::display() {
    cout << "Node at address " << this << " contains ";
    nodeData.GraphPoint::display();
    cout << " and points to " << nextPtr << endl;

}