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

string GraphPoint::to_String() const{
    retuurn std::to_String(xCoord) + " " + to_String(yCoord);
}