#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
	float x, y;
	cout << "x=";
	cin >> x;
	y = 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2;
	cout << "----\ny=" << y;
}