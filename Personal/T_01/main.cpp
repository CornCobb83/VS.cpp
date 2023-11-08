#include <iostream>

using namespace std;

int main() {

   string food = "Pizza";
   string *ptr;
   ptr = &food;
   cout << endl;

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl << endl;

   food = "Burger";

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl << endl;

   int *ptr2;
   int array[5] = {1, 2, 3, 4, 5};
   ptr2 = &array[0];

   cout << ptr2 << endl;
   cout << &ptr2 << endl;
   cout << *ptr2 << endl << endl;

   cout << *(ptr2 + 1) << endl << endl;

   delete ptr;
   delete ptr2;

   return 0;
}