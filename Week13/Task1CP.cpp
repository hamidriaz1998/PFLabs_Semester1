#include <iostream>
#include <fstream>
using namespace std;
int countLines(string);
main()
{
    string fileName = "Task1.txt";
    int lines = countLines(fileName);
    cout << "Total number of lines: " << lines;
}

int countLines(string fileName)
{
    fstream f;
    f.open(fileName, ios::in);
    int count = 0;
    while (!f.eof())
    {
        string l;
        getline(f,l);
        count++;
    }
    return count;
}