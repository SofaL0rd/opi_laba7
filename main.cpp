#include <iostream>
#include "stdio.h" 
#include "windows.h"
#define _USE_MATH_DEFINES
#include "math.h"
using namespace std;

int task1(int, int );

int task2(int, int, float);

int task3(int, int);

int task1(int x, int y) {
	int a;
	a = (1 + pow(sin(x), 2)) / 2 + fabs((y - 3 * y)) / (1 + pow(x, 3) * pow(y, 2)) + sqrt(x) / pow((x - y), 1./3);

	return a;
}

int task2(int x, int y, float alpha) {
	int b;
	b = pow(cos(tan(x + y)), 2) + sin((alpha - 270)/ M_PI);
	return b;
}

int task3(int a, int b) {

}

int main()
{
 
}
