#include <iostream>
using namespace std;
string calculatePoolState(int, int, int, float);
main()
{

    int V, P1, P2;
    float H;
    string result;
    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;
    result = calculatePoolState(V, P1, P2, H);
    cout << result;
}