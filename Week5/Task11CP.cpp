#include <iostream>
#include <iomanip>
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

string calculatePoolState(int volume, int pipe1, int pipe2, float hours)
{

    float totalFlow;
    int fillPerc, totalP1Flow, totalP2Flow, p1Perc, p2Perc;
    totalP1Flow = pipe1 * hours;
    totalP2Flow = pipe2 * hours;
    totalFlow = totalP1Flow + totalP2Flow;
    if (totalFlow > volume)
    {
        int overflow = totalFlow - volume;
        stringstream stream;
        stream << fixed << setprecision(1) << hours;
        return "For " + stream.str() + " hours, the pool overflows with " + to_string(overflow) + " liters.";
    }
    if (totalFlow <= volume)
    {
        fillPerc = (totalFlow / volume) * 100;
        p1Perc = (totalP1Flow / totalFlow) * 100;
        p2Perc = (totalP2Flow / totalFlow) * 100;
        return "The pool is " + to_string(fillPerc) + "% full. Pipe 1: " + to_string(p1Perc) + "%. Pipe 2: " + to_string(p2Perc) + "%.";
    }
}