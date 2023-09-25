#ifndef GRAPHPOINT_H
#define GRAPHPOINT_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class GraphPoint (
public:

    GraphPoint();

    GraphPoint(double x, double y);

    double getX() const;
    double getY() const;

    void setX(double newX);
    void setY(double newY);

    void setCoords(double newX, double newY);

    void display() const;

    string to_String() const;

private:
    double xCoord;
    double yCoord;

)

#endif