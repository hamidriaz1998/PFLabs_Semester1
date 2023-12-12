#include <iostream>
#include <fstream>
using namespace std;
void getSudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName);
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName);
int main()
{
    string names[100];
    int adNumbers[100];
    float percentages[100];
    int size = 100;
    int count = 0;
    string fileName = "Task5.txt";
    getSudentDetails(names, adNumbers, percentages, size, count, fileName);
    saveToFile(names, adNumbers, percentages, count, "topperStudents.txt");
}

void getSudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName)
{
    fstream f;
    string line = "";
    f.open(fileName, ios::in);
    while (!f.eof())
    {
        getline(f, line);
        names[count] = line;
        getline(f, line);
        adNumbers[count] = stoi(line);
        getline(f, line);
        percentages[count] = stoi(line);
        count++;
    }
}
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName)
{
    fstream f;
    f.open(fileName, ios::out);
    for (int i = 0; i < count; i++)
    {
        f << "Name: " << names[count] << endl;
        f << "Admission Number: " << adNumbers[count] << endl;
        f << "Percentage: " << percentages[count] << endl;
        f << endl;
    }
}
