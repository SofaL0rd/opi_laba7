

#include <iostream>
#include "stdio.h" 
#include "windows.h"
#include <iomanip>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /* float x, Y, sum, Z, y;
     cout << "Input x " << endl;
      cin >> x;
      sum = 0;
      for (int i = 1; i < 11;i++) {
          sum += i;

      }
      Y = sin(x) + 2 * log(sum);
      cout << "Y= " << setprecision(2) << Y << endl;
      */

      /*cout << "Input y " << endl;
      cin >> y;
      Z = 0;
      for (int i = 1; i < 11; i++) {
          Z *= i;

      }
      if ((y*y-4)!=0) {
          Z = (Z + 2 * cos(y)) / (y * y - 4);
          cout << "Z= " << setprecision(3) << Z << endl;
      }
      else {
          cout << "nepravil`no" << endl;
      }*/
      /*  float x, Y, sum;
    cout << "Введіть x  " << endl;
    cin >> x;
    sum = 0;
    for (int i = 1; i < 7; i++) {
        sum += (i*i*i);
    }
    Y = (log(sum) + 2 * pow(sin(x), 2)) / (x * x + 5);
    cout << "Y= " << setprecision(2) << Y << endl;
    */

    float Z, m = 1, y;
    cout << "Введіть y " << endl;
    cin >> y;
    Z = 1;
    for (int i = 1; i < 11; i++) {
        Z *= i;
    }
    Z = (Z * cos(m * y)) + 2 * y;
    cout << "Z= " << setprecision(10) << Z << endl;
    

}

