#include <iostream>

using namespace std;

int main() {

   string food = "Pizza";
   string *ptr = &food;
   cout << endl;

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl;

   food = "Burger";
   cout << endl;

   cout << ptr << endl;
   cout << &ptr << endl;
   cout << *ptr << endl;

   return 0;
}