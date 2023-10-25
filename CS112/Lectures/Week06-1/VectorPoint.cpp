// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>
// #include "GraphPoint.h"
#include "VectorPoint.h"

// CONSTRUCTORS
    VectorPoint() {
        magValue = 0;
        dirValue = 0;
    }

    VectorPoint(double x, double y, double mag, double dir) {
        
    }
    VectorPoint(double mag);
    VectorPoint(int dir);

    // ACCESSORS
    double getMag() const;
    dir getDir() const;

    // NO MUTATORS
    void setMag(double mag);
    void setDir(int dir);

    // OTHER METHOD

    virtual void display() const;
    string to_string() const;

using namespace std;