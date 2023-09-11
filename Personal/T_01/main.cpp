#include <iostream>
using namespace std;

int main() {
   int userInput;

	cin >> userInput;

   for (int j = userInput; j <= 8; j += 2);
   {
      cout << j << endl;
   }

   return 0;
}