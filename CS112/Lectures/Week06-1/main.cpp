#include <cstdlib>
#include <iostream>
#include <string>
#include "GraphPoint.h"
#include <cmath>

using namespace std;

int main() {
    cout << boolalpha;

    cout << fixed << setprecision(2);

    //Test constructors
    GraphPoint myPoint;
    cout << "Zero arg myPoint:";
    myPoint.display();

    GraphPoint otherPoint(3.0, 4.0);
    cout << "two arg otherPoint: ";
    otherPoint.display();

    cout << "X coord of other Point is "
        << otherPoint.getX() << endl;
    cout << "Y coord of other Point is "
        << otherPoint.getY() << endl;

    cout << "otherPoint changed to : ";
    otherPoint.setX(27.4567);
    otherPoint.setY(-456.6725);
    otherPoint.display();

    cout << "DIstance: ";
    cout << myPoint.distance(otherPoint) << endl;

    cout << "Assign newPoint to be other:";
    GraphPoint = newPoint();
    newPoint = otherPoint;
    newPoint.display();

    cout << "Are otherPoint and newPoint the same? ";
    cout << (newPoint == otherPoint) << endl;

    cout << "Changing newPoint to: ";
    newPoint
    newPoint.display();

    return EXIT_SUCCESS;
}