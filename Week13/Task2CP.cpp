#include <iostream>
#include <fstream>
using namespace std;
int countCharacters(string fileName);
int main()
{
    string fileName = "Task2.txt";
    cout << "Total number of characters: " << countCharacters(fileName);
}

int countCharacters(string fileName)
{
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
        count++;
    }
    return count;
}