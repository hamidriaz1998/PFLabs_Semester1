#include <iostream>
using namespace std;
int calculateDamage(string, string, int, int);
main()
{
    cout << calculateDamage("fire", "water", 100, 100) << endl;
    cout << calculateDamage("grass", "fire", 35, 5) << endl;
    cout << calculateDamage("electric", "fire", 100, 100);
}