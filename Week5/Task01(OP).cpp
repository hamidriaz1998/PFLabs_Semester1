#include <iostream>
using namespace std;

float min(float, float);
main()
{

    float n1, n2, result;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    result = min(n1, n2);
    cout << "The minimum of " << n1 << " and " << n2 << " is: " << result;
}

float min(float number1, float number2)
{

    if (number1 > number2)
    {
        return number2;
    }
    if (number2 > number1)
    {
        return number1;
    }
}