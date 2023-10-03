#include <iostream>
using namespace std;
bool IsSymmetrical(int);
main()
{

    int n;
    bool result;
    cout << "Enter a five-digit number: ";
    cin >> n;
    result = IsSymmetrical(n);
    if (result)
    {
        cout << "The number is symmetrical.";
    }
    if (!result)
    {
        cout << "The number is not symmetrical.";
    }
}

bool IsSymmetrical(int value)
{

    int d1, d2, d3;
    d1 = value % 10;
    value = value / 10;
    d2 = value % 10;
    value = value / 10;
    d3 = value % 10;
    if (d1 == d3)
    {
        return true;
    }
    if (d1 != d3)
    {
        return false;
    }
}
