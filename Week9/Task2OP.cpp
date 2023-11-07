#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
        count++;
    cout << "Reversed String: ";
    for (int i = count; i >= 0; i--)
        cout << word[i];
}