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
    cout << "************************************" << endl;
    ColorPoint colorPt1;
    colorPt1.display();
    cout << endl;

    ColorPoint colorPt2(7.6, -4.5, Red);
    colorPt2.display();
    cout << endl;

    colorPt2.setColor(Blue);
    cout << "Changed colorPoint2 to Blue" << endl;
    cout << "Color is " << colorPt2.getColor() << endl;
    colorPt2.display();
    cout << "String of colorPt2 is: " << colorPt2.to_string() << endl;
    cout << endl;

    cout << "Let's use sumPoint (a GraphPoint) and display it!" << endl;
    sumPoint.GraphPoint::display();
    cout << "Display as a colorPoint" << endl;
    //sumPoint.ColorPoint.display();

    cout << "Making a ColorPoint copy of sumPoint..." << endl;
    ColorPoint sumColorPoint(sumPoint);
    sumColorPoint.display();
    sumColorPoint.GraphPoint::display();
    cout << endl;

    cout << "Fun with pointers!" << endl;

    GraphPoint *baseClassPtr;
    ColorPoint *derivedClassPtr;

    baseClassPtr = &sumColorPoint;
    cout << "Which display method will be called?" << endl;
    baseClassPtr->display();
    cout << "Can I get the color of thid object?" << endl;
    cout << COLORNAMES[derivedClassPtr->getColor()] << endl;
    cout << endl;

    cout << "Now let's point to sumPoint" << endl;
    baseClassPtr = &sumPoint;
    //derivedClassPtr = &sumPoint;

    return EXIT_SUCCESS;
}