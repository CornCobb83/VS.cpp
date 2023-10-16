#include <cstdlib>
#include <iostream>
#include <string>
#include "GraphPoint.h"
#include <cmath>

using namespace std;

GraphPoint::GraphPoint() {
    xCoord = X_DEFAULT;
    yCoord = Y_DEFAULT;
    pointNamePtr = new string;
    *pointNamePtr = NAME_DEFAULT;
    colorValue = COLOR_DEFAULT;
}

GraphPoint::GraphPoint(double x, double y) {
    xCoord = x;
    yCoord = y;
    pointNamePtr = new string;
    *pointNamePtr = NAME_DEFAULT;
    colorValue = COLOR_DEFAULT;
}

GraphPoint::GraphPoint(double x, double y, string name) {
    xCoord = x;
    yCoord = y;
    pointNamePtr = new string;
    *pointNamePtr = name;
    colorValue = COLOR_DEFAULT;
}

GraphPoint::GraphPoint(double x, double y, string name, PointColor color) {
    xCoord = x;
    yCoord = y;
    pointNamePtr = new string;
    *pointNamePtr = name;
    //colorValue = color;
}

GraphPoint::GraphPoint(const GraphPoint& existingPoint) {
    xCoord = existingPoint.getX();
    yCoord = existingPoint.getY();
    pointNamePtr = new string;
    *pointNamePtr = existingPoint.getName();
    colorValue = existingPoint.getColor();
}

GraphPoint::~GraphPoint() {
    delete pointNamePtr;
    cout << "*** Destructor Called ***" << endl;
}

double GraphPoint::getX() const {
    return xCoord;
}

double GraphPoint::getY() const {
    return yCoord;
}

string GraphPoint::getName() const{
    return *pointNamePtr;
}

PointColor GraphPoint::getColor() const{
    return colorValue;
}

void GraphPoint::setX(double newX) {
    xCoord = newX;
}

void GraphPoint::setY(double newY) {
    yCoord = newY;
}

void GraphPoint::setName(string newName) {
    *pointNamePtr = newName;
}

void GraphPoint::setColor(PointColor newColor) {
    colorValue = newColor;
}

void GraphPoint::flipPoint() {
    double temp;
    temp = xCoord;
    xCoord = yCoord;
    yCoord = temp;
}

void GraphPoint::display() const {
    if (pointNamePtr != NULL) {
    cout << "A " << COLOR_NAMES[colorValue] << " point at "
         << "(" << xCoord << ", "
         << yCoord << ") " << *pointNamePtr
         << endl;
    }
    else {
        cout << "WTF??? Pointer was NILL??" << endl;
    }
}

string GraphPoint::to_string() const{
    return std::to_string(xCoord) + "," + std::to_string(yCoord) + "," +
        *pointNamePtr + "," + COLOR_NAMES[colorValue];
}

double GraphPoint::distance(const GraphPoint& p2) const {
    double xDiff = xCoord - p2.yCoord;
    double yDiff = yCoord - p2.yCoord;
    double xDiffSqr = pow(xDiff, 2);
    double yDiffSqr = pow(yDiff, 2);

    return sqrt(xDiffSqr + yDiffSqr);
}

GraphPoint& GraphPoint::operator =(const GraphPoint& rhs) {
    xCoord = rhs.xCoord;
    yCoord = rhs.yCoord;

    return *this;
}

bool GraphPoint::operator ==(const GraphPoint& rhs) const{
    bool xEqual = (abs(xCoord - rhs.xCoord) < 0.001);
    bool yEqual = (abs(yCoord - rhs.yCoord) < 0.001);

    return (xEqual && yEqual);
}

GraphPoint GraphPoint::operator +(const GraphPoint& rhs) {
    GraphPoint result;
    result.setX(xCoord + rhs.getX());
    result.setY(yCoord + rhs.getY());
    //this->setName(rhs.getName());
    return result;
}