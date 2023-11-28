#include <iostream>
using namespace std;
int sum(int arr[][3], int size);
main()
{
    int arr[3][3];
    int size;
    cout << "Enter row size: ";
    cin >> size;
    cout << "Enter the elements of the matrix: "<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter the element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "The sum of elements in the matrix is: " << sum(arr,size);
}
int sum(int arr[][3],int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result += arr[i][j];
        }
    }
    return result;
}