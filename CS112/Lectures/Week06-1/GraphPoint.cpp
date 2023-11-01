#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "GraphPoint.h"

using namespace std;

// CONSTRUCTORS

GraphPoint::GraphPoint() : xCoord(X_DEFAULT), yCoord(Y_DEFAULT) {
}

GraphPoint::GraphPoint(double x, double y): xCoord(x), yCoord(y) {
}

GraphPoint::GraphPoint(double r, int theta) {
    int thetaNormalized = (theta + 36000) % 360;
    double thetaRadians = (thetaNormalized * M_PI) / 180.0;

    xCoord = r * cos(thetaRadians);
    yCoord = r * sin(thetaRadians);
}

// ACCESSORS

double GraphPoint::getX() const {
    return xCoord;
}

double GraphPoint::getY() const {
    return yCoord;
}

// MUTATORS

void GraphPoint::setX(double newX) {
    xCoord = newX;
}

void GraphPoint::setY(double newY) {
    yCoord = newY;
}

void GraphPoint::flipCoords() {
    double temp;
    temp = xCoord;
    xCoord = yCoord;
    yCoord = temp;
}

void GraphPoint::resetToOrigin() {
    xCoord = 0.0;
    yCoord = 0.0;
}

void GraphPoint::setCoords(double x, double y) {
    xCoord = x;
    yCoord = y;
}

// OTHER METHODS

void GraphPoint::display() const {
    cout << "GraphPoint "
         << "(" << xCoord << ", "
         << yCoord << ")" << endl;
}

string GraphPoint::to_string() const {
    return std::to_string(xCoord) + "," + std::to_string(yCoord);
}

double GraphPoint::distance(const GraphPoint& p2) const {
    double xDiff = xCoord - p2.getX();
    double yDiff = yCoord - p2.getY();

    double xDiffSqr = pow(xDiff, 2.0);
    double yDiffSqr = pow(yDiff, 2.0);

    return sqrt(xDiffSqr + yDiffSqr);
}

bool GraphPoint::operator ==(const GraphPoint& rhs) const {
    bool xEqual = (abs(xCoord - rhs.xCoord) < 0.001);
    bool yEqual = (abs(yCoord - rhs.yCoord) < 0.001);

    return (xEqual && yEqual);
}

GraphPoint GraphPoint::operator +(const GraphPoint& rhs) {
    GraphPoint result;
    result.setX(xCoord + rhs.getX());
    result.setY(yCoord + rhs.getY());

    return result;
}