#include <iostream>
using namespace std;
void printMatrix(int arr[][3], int size);
bool isIdentity(int arr[][3], int size);
main()
{
    int arr[3][3];
    int size = 3;
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter the element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    printMatrix(arr, size);
    if (isIdentity(arr, size))
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }
}

void printMatrix(int arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

bool isIdentity(int arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    return false;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}