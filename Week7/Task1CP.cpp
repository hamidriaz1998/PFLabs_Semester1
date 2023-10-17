#include <iostream>
using namespace std;
void printTable(int number);
main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printTable(n);
}

void printTable(int number)
{
    int answer;
    for (int i = 1; i <= 10; i++)
    {
        answer = i * number;
        cout << number << " x " << i << " = " << answer << endl;
    }
}