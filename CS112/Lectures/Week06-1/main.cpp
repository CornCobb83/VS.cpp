// CS 112 Fall 2023 Week 09-1 Lecture
// Demonstration of C++ Derived Classes
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "GraphPoint.h"
#include "ColorPoint.h"

using namespace std;

int main() {

    cout << boolalpha;
    cout << fixed << setprecision(2);

    // ****** TESTING COLORPOINT DERIVED CLASS *****
    // ****** POLYMORPHISM AND  DYNAMIC BINDING TESTS *****

    ColorPoint p1;
    GraphPoint p2;
    cout << "ColorPoint p1 display(): ";
    p1.display();

    ColorPoint *p3Ptr = new ColorPoint(5, 6, Green);
    GraphPoint *p4Ptr = new GraphPoint(7, 8);
    cout << "ColorPoint *p3Ptr display(): ";
    p3Ptr->display();
    cout << "GraphPoint *p4Ptr display(): ";
    p4Ptr->display();

    GraphPoint *pointArray[4];
    pointArray[0] = &p1;
    pointArray[1] = &p2;
    pointArray[2] = p3Ptr;
    pointArray[3] = p4Ptr;

    for (int i = 0; i < 4; i++) {
        cout << "Pointer at index " << i << ": ";
        pointArray[i]->display();
    }

    return EXIT_SUCCESS;
}