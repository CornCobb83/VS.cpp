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

    // // Test constructors
    // GraphPoint myPoint;
    // cout << "Zero arg myPoint: ";
    // myPoint.display();
    // cout << endl;

    // GraphPoint otherPoint(3.0, 4.0);
    // cout << "Two arg otherPoint: ";
    // otherPoint.display();
    // cout << endl;

    // cout << "X coord of otherPoint is "
    // << otherPoint.getX() << endl;
    // cout << "Y coord of otherPoint is "
    // << otherPoint.getY() << endl;
    // cout << "otherPoint changed to: ";
    // otherPoint.setX(27.4567);
    // otherPoint.setY(-456.67275);
    // otherPoint.display();
    // cout << endl;

    // cout << "otherPoint flipCoords to: ";
    // otherPoint.flipCoords();
    // otherPoint.display();
    // cout << endl;

    // cout << "otherPoint resetToOrigin: ";
    // otherPoint.resetToOrigin();
    // otherPoint.display();
    // cout << endl;

    // cout << "otherPoint reset to: ";
    // otherPoint.setCoords(12.345, 67.899);
    // otherPoint.display();
    // cout << endl;

    // cout << "Distance from myPoint to OtherPoint: ";
    // cout << myPoint.distance(otherPoint) << endl;
    // cout << "Compare to manually calculated distance: ";
    // cout << (abs(myPoint.distance(otherPoint) - 69.01212) < 0.001)
    // << endl;

    // cout << "Assign newPoint to be = otherPoint: ";
    // GraphPoint newPoint;
    // newPoint = otherPoint;
    // newPoint.display();
    // cout << endl;

    // cout << "Are otherPoint and newPoint the same? ";
    // cout << (newPoint == otherPoint) << endl;

    // cout << endl;
    // cout << "Changing newPoint to :";
    // newPoint.setX(234.6);
    // newPoint.display();
    // cout << endl;

    // cout << "Compare otherPoint and newPoint - should be FALSE: ";
    // cout << (newPoint == otherPoint) << endl;
    // cout << "Sum of newPoint and otherPoint is: ";
    // GraphPoint sumPoint;
    // sumPoint = newPoint + otherPoint;
    // sumPoint.display();
    // cout << endl;

    // // ****** TESTING COLORPOINT DERIVED CLASS *****
    // cout << "************************************" << endl;
    // ColorPoint colorPt1;
    // colorPt1.display();
    // cout << endl;

    // ColorPoint colorPt2(7.6, -4.5, Red);
    // colorPt2.display();
    // cout << endl;

    // colorPt2.setColor(Blue);
    // cout << "Changed colorPoint2 to Blue" << endl;
    // cout << "Color is " << colorPt2.getColor() << endl;
    // colorPt2.display();
    // cout << "String of colorPt2 is: " << colorPt2.to_string() << endl;
    // cout << endl;

    // cout << "Let's use sumPoint (a GraphPoint) and display it!" << endl;
    // sumPoint.GraphPoint::display();
    // cout << "Display as a colorPoint" << endl;
    // //sumPoint.ColorPoint.display();

    // cout << "Making a ColorPoint copy of sumPoint..." << endl;
    // ColorPoint sumColorPoint(sumPoint);
    // sumColorPoint.display();
    // sumColorPoint.GraphPoint::display();
    // cout << endl;

    // cout << "Fun with pointers!" << endl;

    // GraphPoint *baseClassPtr;
    // ColorPoint *derivedClassPtr;

    // baseClassPtr = &sumColorPoint;
    // cout << "Which display method will be called?" << endl;
    // baseClassPtr->display();
    // cout << "Can I get the color of thid object?" << endl;
    // cout << COLORNAMES[derivedClassPtr->getColor()] << endl;
    // cout << endl;

    // cout << "Now let's point to sumPoint" << endl;
    // baseClassPtr = &sumPoint;
    // //derivedClassPtr = &sumPoint;

    // ****** POLYMORPHISM AND  DYNAMIC BINDING TESTS *****

    // ColorPoint p1;
    // GraphPoint p2;
    // cout << "ColorPoint p1 display(): ";
    // p1.display();

    // ColorPoint *p3Ptr = new ColorPoint(5, 6, Green);
    // GraphPoint *p4Ptr = new GraphPoint(7, 8);
    // cout << "ColorPoint *p3Ptr display(): ";
    // p3Ptr->display();
    // cout << "GraphPoint *p4Ptr display(): ";
    // p4Ptr->display();

    // GraphPoint *pointArray[4];
    // pointArray[0] = &p1;
    // pointArray[1] = &p2;
    // pointArray[2] = p3Ptr;
    // pointArray[3] = p4Ptr;

    // for (int i = 0; i < 4; i++) {
    //     cout << "Pointer at index " << i << ": ";
    //     pointArray[i]->display();
    // }

    // Let's create a GraphPoint and make a Node
    // containing the values of that GraphPoint
    GraphPoint fredPt(27.1, 84.3);
    Node fredNode(fredPt);
    fredNode.display();
    cout << fredNode.to_string() << endl;

    // Now let's create a second GraphPoint and
    // make another Node that contains these values
    // and also points to the previous Node
    GraphPoint wilmaPt(3.4, 5.6);
    Node wilmaNode(wilmaPt, &fredNode);
    wilmaNode.display();
    cout << wilmaNode.to_string() << endl;

    return EXIT_SUCCESS;
}