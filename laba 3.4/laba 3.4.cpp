#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
	float x, y;
	cout << "x=";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "----\ny=" << y;
}