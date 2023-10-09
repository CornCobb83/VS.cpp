#ifndef GRAPHPOINT_H
#define GRAPHPOINT_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double X_DEFAULT = 0.0;
const double Y_DEFAULT = 0.0;
const string NAME_DEFAULT = "Unnamed";

class GraphPoint {
public:

    GraphPoint();

    GraphPoint(double x, double y);

    GraphPoint(double x, double y, string name);

    GraphPoint(const GraphPoint& existingPoint);

    ~GraphPoint();

    double getX() const;
    double getY() const;
    string getName() const;

    void setX(double newX);
    void setY(double newY);
    void setName(string newName);

    void setCoords(double newX, double newY);

    void display() const;

    string to_string() const;

    void flipPoint();

    double distance(const GraphPoint& p2) const;

    bool operator ==(const GraphPoint& rhs) const;
    //GraphPoint& operator  =(const GraphPoint& rhs);
    GraphPoint operator +(const GraphPoint& rhs);

private:
    double xCoord;
    double yCoord;
    string *pointNamePtr;

};

#endif