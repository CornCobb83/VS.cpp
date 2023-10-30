// CS 112 Fall 2023 Week 011-1 Lecture

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Node.h"

using namespace std;

Node::Node() {
    nodeData = GraphPoint();
    nextPtr = DEFAULT_PTR;
}

Node::Node(GraphPoint gp) : nodeData(gp) {
    nextPtr = DEFAULT_PTR;
}

Node::Node(GraphPoint gp, Node *ptr) : nodeData(gp), nextPtr(ptr) {}