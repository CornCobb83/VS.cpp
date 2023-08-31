#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;

   int Product = (num1 * num2 * num3 * num4);
   int Average = (num1 + num2 + num3 + num4) / 4;

   //auto num5 = num1 + 0.000;
   //auto num6 = num2 + 0.000;
   //auto num7 = num3 + 0.000;
   //auto num8 = num4 + 0.000,

   //float Product1 = Product + 0.000;
   //float Average1 = Average + 0.000;

    cout << "test";

   cout << Product << " " << Average << endl;

   //cout << Product1 << " " << Average1 << endl;

   return 0;
}