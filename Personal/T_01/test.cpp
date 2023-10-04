#include <iostream>
#include "test.h"
using namespace std;

int add(int num1, int num2) {
    return (num1 + num2);
}

void add7(int& num) {
    num += 7;
}