#include <iostream>
using namespace std;
main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    int null = 00;
    char nullChar = null;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
        {
            sentence[i] = nullChar;
        }
    }
    cout << "String with vowels removed: " << sentence;
}