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

   string array[2] = {"this", "that"};

   ptr = array;

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl << endl;

   for ( int i = 0; i < 2; i++ ) {
      cout << "*(ptr + " << i << ") : ";
      cout << *(ptr + i) << endl;
   }

   delete ptr;

   return 0;
}