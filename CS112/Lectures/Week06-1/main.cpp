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

// Test constructors
GraphPoint myPoint;
cout << "Zero arg myPoint: ";
myPoint.display();
cout << endl;

GraphPoint otherPoint(3.0, 4.0);
cout << "Two arg otherPoint: ";
otherPoint.display();
cout << endl;

cout << "X coord of otherPoint is "
<< otherPoint.getX() << endl;
cout << "Y coord of otherPoint is "
<< otherPoint.getY() << endl;
cout << "otherPoint changed to: ";
otherPoint.setX(27.4567);
otherPoint.setY(-456.67275);
otherPoint.display();
cout << endl;

cout << "otherPoint flipCoords to: ";
otherPoint.flipCoords();
otherPoint.display();
cout << endl;

cout << "otherPoint resetToOrigin: ";
otherPoint.resetToOrigin();
otherPoint.display();
cout << endl;

cout << "otherPoint reset to: ";
otherPoint.setCoords(12.345, 67.899);
otherPoint.display();
cout << endl;

cout << "Distance from myPoint to OtherPoint: ";
cout << myPoint.distance(otherPoint) << endl;
cout << "Compare to manually calculated distance: ";
cout << (abs(myPoint.distance(otherPoint) - 69.01212) < 0.001)
<< endl;

cout << "Assign newPoint to be = otherPoint: ";
GraphPoint newPoint;
newPoint = otherPoint;
newPoint.display();
cout << endl;

cout << "Are otherPoint and newPoint the same? ";
cout << (newPoint == otherPoint) << endl;

cout << endl;
cout << "Changing newPoint to :";
newPoint.setX(234.6);
newPoint.display();
cout << endl;

cout << "Compare otherPoint and newPoint - should be FALSE: ";
cout << (newPoint == otherPoint) << endl;
cout << "Sum of newPoint and otherPoint is: ";
GraphPoint sumPoint;
sumPoint = newPoint + otherPoint;
sumPoint.display();
cout << endl;

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
sumPoint.ColorPoint::display();

return EXIT_SUCCESS;
}