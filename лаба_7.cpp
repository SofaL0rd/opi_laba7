#include <iostream>
#include "stdio.h" 
#include <iomanip>
using namespace std;


int main()
{
    float Z, m = 1, y;
    cout << " y " << endl;
    cin >> y;
    Z = 1;
    for (int i = 1; i < 11; i++) {
        Z *= i;
    }
    Z = (Z * cos(m * y)) + 2 * y;
    cout << "Z= " << setprecision(10) << Z << endl;
}

