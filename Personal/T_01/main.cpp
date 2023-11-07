#include <iostream>

using namespace std;

int main() {

   string food = "Pizza";
   string *ptr = &food;
   cout << endl;

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl << endl;

   food = "Burger";

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl << endl;

   string array = {"this", "that"};

   *ptr = &array[0];

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl << endl;

   delete ptr;

   return 0;
}