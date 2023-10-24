#include <iostream>
using namespace std;
bool isPrime(int);
int primeNumber(int);
main()
{
    cout << primeNumber(10) << endl;
    cout << primeNumber(20) << endl;
    cout << primeNumber(30) << endl;
}

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
