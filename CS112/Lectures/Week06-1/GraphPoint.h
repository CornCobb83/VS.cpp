#ifndef GRAPHPOINT_H
#define GRAPHPOINT_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// USER-DEFINED DATA TYPES

enum PointColor {Black, Blue, Green, Red, Yellow};

const double X_DEFAULT = 0.0;
const double Y_DEFAULT = 0.0;
const string NAME_DEFAULT = "Unnamed";
const PointColor COLOR_DEFAULT = Black;
//const string COLOR_NAMES[5] = {"Black", "Blue", "Green", "Red", "Yellow"};

class GraphPoint {
public:

    GraphPoint();

    GraphPoint(double x, double y);

    GraphPoint(double x, double y, string name);

    GraphPoint(double x, double y, string name, PointColor color);

    GraphPoint(const GraphPoint& existingPoint);

    ~GraphPoint();

    double getX() const;
    double getY() const;
    string getName() const;
    PointColor getColor() const;

    void setX(double newX);
    void setY(double newY);
    void setName(string newName);
    void setColor(PointColor newColor);

    void setCoords(double newX, double newY);

    void display() const;

    string to_string() const;

    void flipPoint();

    double distance(const GraphPoint& p2) const;

    bool operator ==(const GraphPoint& rhs) const;
    GraphPoint& operator  =(const GraphPoint& rhs);
    GraphPoint operator +(const GraphPoint& rhs);

private:
    double xCoord;
    double yCoord;
    string *pointNamePtr;
    PointColor colorValue;

};

#endif