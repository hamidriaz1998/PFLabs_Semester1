#include <iostream>
using namespace std;
bool doesBrickFit(int, int, int, int, int);
main()
{
    int a, b, c, w, h;
    cout << "Enter width of brick: ";
    cin >> a;
    cout << "Enter height of brick: ";
    cin >> b;
    cout << "Enter breadth of brick: ";
    cin >> c;
    cout << "Enter the width of hole: ";
    cin >> w;
    cout << "Enter the height of hole: ";
    cin >> h;
    cout << doesBrickFit(a, b, c, w, h);
}

bool doesBrickFit(int a, int b, int c, int w, int h)
{
    if ((a <= w && b <= h) || (a <= h && b <= w) || (a <= w && c <= h) || (a <= h && c <= w) || (b <= w && c <= h) || (b <= h && c <= w))
    {
        return true;
    }
    return false;
}