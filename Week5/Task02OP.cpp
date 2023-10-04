#include <iostream>
#include <cmath>
using namespace std;
main()
{

	float base, exp, result;
	cout << "Enter the base number: ";
	cin >> base;
	cout << "Enter the exponent: ";
	cin >> exp;
	result = pow(base, exp);
	cout << base << " raised to the power " << exp << " is: "<<result;
}
