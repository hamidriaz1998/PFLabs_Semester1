#include <iostream>
#include <fstream>
using namespace std;
int countCharacters(string fileName,char ch);
int main()
{
    string fileName = "Task3.txt";
    cout << "Total number of characters: " << countCharacters(fileName,'s');
}

int countCharacters(string fileName,char ch)
{
    char upper = toupper(ch);
    fstream f;
    f.open(fileName, ios::in);
    int count = 0;
    string r = "";
    while (!f.eof())
    {
        string l;
        getline(f, l);
        r += l;
    }
    for (int i = 0; r[i] != '\0'; i++)
    {
        if (r[i] == ch || r[i] == upper)
        count++;
    }
    return count;
}