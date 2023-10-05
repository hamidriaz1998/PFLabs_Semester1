#include <iostream>
#include <cmath>
using namespace std;
void eqCal(int, int, int);
main()
{

    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    eqCal(a, b, c);
}

void eqCal(int a, int b, int c)
{

    int det;
    double rootInt, root1, root2;
    det = (b * b) - (4 * a * c);
    if (det > 0)
    {
        root1 = (-b + sqrt(det)) / (2 * a);
        root2 = (-b - sqrt(det)) / (2 * a);
        cout << "Solutions: x = " << root1 << " and x = " << root2;
    }
    if (det == 0)
    {
        root1 = (-b - sqrt(det)) / (2 * a);
        cout << "Solution: x = " << root1;
    }
    if (det < 0)
    {
        rootInt = (-b / (2 * a));
        root1 = (sqrt(-det) / (2 * a));
        cout << "Complex Solutions: x = " << rootInt << " + " << root1 << "i and x = " << rootInt << " - " << root1 << "i";
    }
}