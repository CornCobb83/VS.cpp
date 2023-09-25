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

double GraphPoint:getX() const {
    return xCoord;
}

double GraphPoint:getY() const {
    return yCoord;
}

void GraphPoint::setX(double newX) {
    xCoord = newX;
}

void GraphPoint::setY(double newY) {
    yCoord = newY;
}

void GraphPoint::display() const {
    cout << "(" << xCoord << ", "
        << yCoord << ")" << endl;
}