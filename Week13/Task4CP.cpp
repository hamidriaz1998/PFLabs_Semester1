#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName);
int main()
{
    string names[100];
    int ages[100];
    float matricMarks[100];
    float fscMarks[100];
    float ecatMarks[100];
    int count = 0;
    int size = 100;
    string fileName = "student.txt";
    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);
    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, fileName);
}

void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
    string answer = "Yes";
    while (answer != "No")
    {
        cout << "Enter student's name: ";
        cin >> names[count];
        cout << "Enter student's age: ";
        cin >> ages[count];
        cout << "Enter student's Matric marks: ";
        cin >> matricMarks[count];
        cout << "Enter student's Fsc marks: ";
        cin >> fscMarks[count];
        cout << "Enter student's Ecat: ";
        cin >> ecatMarks[count];
        count++;
        cout << "Enter No to Stop or Yes to Continue Enter: ";
        cin >> answer;
    }
}

void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName)
{
    fstream f;
    f.open(fileName, ios::out);
    for (int i = 0; i < count; i++)
    {
        f << "Name: " << names[i] << endl;
        f << "Age: " << ages[i] << endl;
        f << "Matric Marks: " << matricMarks[i] << endl;
        f << "Fsc Marks: " << fscMarks[i] << endl;
        f << "Ecat Marks: " << ecatMarks[i] << endl;
        f<<endl;
    }
}
