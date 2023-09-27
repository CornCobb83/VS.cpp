#include <cstdlib>
#include <iostream>
#include <string>
#include "GraphPoint.h"
#include <cmath>

using namespace std;

GraphPoint::GraphPoint() {
    xCoord = X_DEFAULT;
    yCoord = Y_DEFAULT;
}

GraphPoint::GraphPoint(double x, double y) {
    xCoord = x;
    yCoord = y;
}

double GraphPoint::getX() const {
    return xCoord;
}

double GraphPoint::getY() const {
    return yCoord;
}

void GraphPoint::setX(double newX) {
    xCoord = newX;
}

void GraphPoint::setY(double newY) {
    yCoord = newY;
}

void GraphPoint::flipPoint() {
    double temp;
    temp = xCoord;
    xCoord = yCoord;
    yCoord = temp;
}

void GraphPoint::display() const {
    cout << "(" << xCoord << ", "
         << yCoord << ")" << endl;
}

string GraphPoint::to_String() {
    return std::to_String(xCoord) + " " + std::to_String(yCoord);
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