// CS 112 Fall 2023 – Assignment #2
// Jordan Cobb

#ifndef DUEL_H
#define DUEL_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int startDuel(bool& angela, bool& cedric, bool& eloise, double angelaW, double cedricW, double eloiseW);

void spell(bool& opponentActive, double wandPower);

#endif