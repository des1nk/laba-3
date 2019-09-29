#include <iostream>
#include <string>
using namespace std;
int main()
{
	float A, B, C, d;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	d = C;
	C = A;
	A = B;
	B = d;
	cout << "-----\nA=" << A << "\n";
	cout << "B=" << B << "\n";
	cout << "C=" << C;
}