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