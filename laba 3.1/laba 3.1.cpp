#include <iostream>
#include <string>
using namespace std;
int main()
{
	float A, B, c;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	c = A;
	A = B;
	B = c;
	cout << "A=" << A << "\n";
	cout << "B=" << B;
}