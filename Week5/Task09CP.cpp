#include <iostream>
#include <string>
using namespace std;
string timeTravel(int, int);
main()
{

    int hours, minutes;
    string result;
    cout << "Enter Hours: ";
    cin >> hours;
    cout << "Enter Minutes: ";
    cin >> minutes;
    result = timeTravel(hours, minutes);
    cout << result;
}

string timeTravel(int h, int m)
{

    m += 15;
    if (m >= 60)
    {
        m -= 60;
        if (h < 23)
        {
            h += 1;
        }
        if (h == 23)
        {
            h = 0;
        }
    }
    return to_string(h) + ":" + to_string(m);
}