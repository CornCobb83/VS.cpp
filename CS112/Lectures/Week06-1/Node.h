#ifndef NODE_H
#define NODE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "GraphPoint.h"

using namespace std;

// Constant declarations in Node class (there are none :-)

// We won't set a "default" GraphPoint here because the
// GraphPoint class takes care of that in its constructors

// It turns out that setting a const pointer value was
// problematic, so we'll just use NULL in the methods :-)
// const Node* DEFAULT_PTR = NULL;


class Node {
public:

    // CONSTRUCTORS
    Node();
    Node(GraphPoint gp);
    Node(GraphPoint gp, Node *nextPtr);

    // ACCESSORS
    GraphPoint getNodeData() const;
    Node *getNextPtr() const;

    // MUTATORS
    void setNodeData(GraphPoint& newNodeData);
    void setNextPtr(Node *newNextPtr);

    // OTHER METHODS
    void display();
    string to_string();

protected:
    // MUTATORS

    // We're protecting this method so that users
    // can't break the Linked List by manually
    // setting pointers -- we'll maintain the integrity
    // of the Linked List by not allowing users to do this!

private:
    // DATA MEMBERS
    GraphPoint nodeData;
    Node *nextPtr;

};

#endif /* NODE_H */