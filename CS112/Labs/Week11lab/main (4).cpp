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

int main() {
    cout << boolalpha;

    cout << "*** DEMONSTRATION OF CONTAINER CLASS LinkedList\n";

    // First, let's make some Nodes

    // Testing the Node class
    // Let's make a Node containing 100

    Node *node100Ptr = new Node(100);
    cout << endl << "*** INFO ABOUT node 100\n";
    node100Ptr->display();

    // Now let's make two more Nodes with 200 and 300

    Node *node200Ptr = new Node(200);
    cout << endl << "*** INFO ABOUT node 200\n";
    node200Ptr->display();

    Node *node300Ptr = new Node(300);
    cout << endl << "*** INFO ABOUT node 300\n";
    node300Ptr->display();

    // NOTE: At this point, we have three separate Nodes,
    // NOT in a List!  We'll put them into a new List below

    // A CONTAINER CLASS is a class definition written as a
    // collection of other data types

    // I want to link these Nodes together to make a LinkedList
    // First, put a Node in the list -- we'll put node 300
    // in *first* because the other nodes will be inserted
    // in the LinkedList at the head *before* this one

    LinkedList myList = LinkedList(node300Ptr);

    // Let's print the LinkedList with only one Node
    cout << endl << "*** LIST WITH ONLY ONE NODE\n";
    myList.display();

    // Let's add node 200 and node 100 to the list, in that
    // order, so we'll have node 100 -> node 200 -> node 300

    myList.addToHead(node200Ptr);
    myList.addToHead(node100Ptr);

    cout << endl << "*** LIST WITH THREE NODES\n";
    myList.display();
    cout << endl;

    // ********************************************************
    // WEEK 12 LAB METHOD TESTS
    // ********************************************************

    cout << "************************************************\n";
    cout << "*** WEEK 12 LAB METHOD TESTS\n";
    cout << "************************************************\n";
    cout << endl;

    cout << "*** listLength test #1 (should print 3): ";
    cout << myList.listLength() << endl << endl;

    cout << "*** getValueAt test #1 (should print 300): ";
    cout << myList.getValueAt(3) << endl << endl;

    cout << "*** getValueAt test #2 (should print -99999): ";
    cout << myList.getValueAt(4) << endl << endl;

    cout << "*** addNodeAfter test #1 (should print true): ";
    Node *node250Ptr = new Node(250);
    cout << myList.addNodeAfter(2, node250Ptr) << endl << endl;

    cout << "*** listLength test #2 (should print 4): ";
    cout << myList.listLength() << endl << endl;

    cout << "*** Printing list - should be 100, 200, 250, 300:\n";
    myList.display();
    cout << endl;

    Node *node123Ptr = new Node(123);
    cout << "*** addNodeAfter test #2 (should not succeed, print false): ";
    cout << myList.addNodeAfter(0, node123Ptr) << endl << endl;

    cout << "*** addNodeAfter test #3 (should not succeed, print false): ";
    cout << myList.addNodeAfter(5, node123Ptr) << endl << endl;

    cout << "*** listLength test #3 (should print 4): ";
    cout << myList.listLength() << endl << endl;

    cout << "*** Printing list - should be 100, 200, 250, 300:\n";
    myList.display();
    cout << endl;

    cout << "*** removeNodeAt test #1 (should print true): ";
    cout << myList.removeNodeAt(4) << endl << endl;

    cout << "*** Printing list - should be 100, 200, 250:\n";
    myList.display();
    cout << endl;

    cout << "*** removeNodeAt test #2 (should not succeed, print false): ";
    cout << myList.removeNodeAt(4) << endl << endl;

    cout << "*** removeNodeAt test #3 (should print true): ";
    cout << myList.removeNodeAt(2) << endl << endl;

    cout << "*** listLength test #4 (should print 2): ";
    cout << myList.listLength() << endl << endl;

    cout << "*** Printing list - should be 100, 250:\n";
    myList.display();
    cout << endl;

    cout << "*** removeNodeAt test #4 (should print true): ";
    cout << myList.removeNodeAt(1) << endl << endl;

    cout << "*** Printing list - should be 250 only:\n";
    myList.display();
    cout << endl;

    cout << "*** removeNodeAt test #5 (should print true): ";
    cout << myList.removeNodeAt(1) << endl << endl;

    cout << "*** Printing list - should be empty list:\n";
    myList.display();
    cout << endl;

    // Be nice -- delete what you allocate!

    delete node100Ptr, node200Ptr, node300Ptr;
    delete node250Ptr;
    delete node123Ptr;

    return EXIT_SUCCESS;
}
