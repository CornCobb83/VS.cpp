// CS 112 Fall 2023 – Assignment #2
// Jordan Cobb

#ifndef DUEL_H
#define DUEL_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

const double ANGELA_WANDPOWER = 0.25;
const double CEDRIC_WANDPOWER = 0.50;
const double ELOISE_WANDPOWER = 0.75;

int startDuel();

void spell(bool& opponentActive, double wandPower);

#endif