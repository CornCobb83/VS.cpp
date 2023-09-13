#include <iostream>
using namespace std;

int main() {

   for (int i = 0; i < 100; i++) {
      int *a;
      a = new int;
      cout << a << endl;
      delete a;
   }

   return 0;
}