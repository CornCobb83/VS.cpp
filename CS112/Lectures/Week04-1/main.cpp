// CS 112 Fall 2023 – Week 04-1
// Jordan Cobb

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << boolalpha;

    int *a_ptr;

    a_ptr = NULL;

    cout << "The value of the pointer is " << a_ptr << endl;

    int someVal = 10;

    cout << "someVar is type int, value = " << someVal
        << " address is " << &someVal << endl;

    a_ptr = &someVal;

    cout << "a_ptr is pointer to int, adress is " << a_ptr
        << ", value stored there = " << *a_ptr << endl;

        

    return EXIT_SUCCESS;
}