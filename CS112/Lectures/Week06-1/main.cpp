#include <cstdlib>
#include <iostream>
#include <iomanip>
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
    GraphPoint newPoint;
    newPoint = otherPoint;
    newPoint.display();

    cout << "Are otherPoint and newPoint the same? ";
    cout << (newPoint == otherPoint) << endl;

    cout << "Changing newPoint to: ";
    newPoint.setX(234.6);
    newPoint.display();

    cout << "Are otherPoint and newPoint the same? ";
    cout << (newPoint == otherPoint) << endl;

    cout << "Sum of newPoint and newPoint is: ";
    GraphPoint sumPoint;
    sumPoint = newPoint + otherPoint;
    sumPoint.display();

    GraphPoint *fredPointPtr;
    GraphPoint *barneyPointPtr;

    fredPointPtr = new GraphPoint(-23.1, 0.75);
    barneyPointPtr = &newPoint;

    cout << "fredPointPtr points to: ";
    fredPointPtr->display();
    // can also use, but not as good: (fredPointPtr).display();
    cout << "barneyPointPtr points to: ";
    barneyPointPtr->display();

    cout << "Let's add those two points";
    GraphPoint *friendsPointPtr = new GraphPoint();
    *friendsPointPtr = *fredPointPtr + *barneyPointPtr;
    friendsPointPtr->display();

    GraphPoint *namedPointPtr = new GraphPoint(15.2, -7.1, "David's Point");

    namedPointPtr->display();
    cout << endl;

    GraphPoint *unnamedPointPtr = new GraphPoint(5.6, 7.8);
    unnamedPointPtr->display();
    cout << endl;

    GraphPoint newNamedPoint(*namedPointPtr);
    newNamedPoint.display();

    newNamedPoint.setName("Fred's Point");
    newNamedPoint.display();

    cout << "What is the value of *namedPointPtr string? ";
    cout << namedPointPtr->getName();
    cout << endl;

    cout << "*** GraphPoint Color Tests! ***" << endl;

    GraphPoint blackPoint;
    blackPoint.setName("I'm a BlackPoint!");
    blackPoint.display();

    GraphPoint bluePoint(7.8, 9.0, "I'm a Blue Point!", Blue);
    bluePoint.display();

    GraphPoint yellowPoint(1, 2, "It's Yellow!" Yellow);

    delete fredPointPtr;

    return EXIT_SUCCESS;
}