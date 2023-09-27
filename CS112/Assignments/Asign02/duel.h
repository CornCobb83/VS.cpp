// CS 112 Fall 2023 – Assignment #2
// Jordan Cobb

#ifndef DUEL_H
#define DUEL_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

double ANGELINA_WANDPOWER = 0.25;
double CEDRIC_WANDPOWER = 0.50;
double ELOISE_WANDPOWER = 0.75;

bool angelaActive = true;
bool cedricActive = true;
bool eloiseActive = true;

int startDuel();

void spell(bool& opponentActive, double wandPower);

#endif