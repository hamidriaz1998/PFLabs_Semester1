#include <iostream>
using namespace std;
int largestColNum(int arr[][5], int size);
void largestColFirst(int arr[][5], int size);
void printMatrix(int arr[][5],int size);
main()
{
    int size;
    cout << "Enter row size: ";
    cin >> size;
    int arr[size][5];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout<<"Original Matrix: "<<endl;
    printMatrix(arr,size);
    cout<<endl;
    largestColFirst(arr,size);
    cout<<"Matrix after largest column moved to first: "<<endl;
    printMatrix(arr,size);
}

int largestColNum(int arr[][5], int size)
{
    int largest = 0, sum = 0,num=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j= 0;j<size;j++){
            sum+=arr[j][i];
        }
        if (sum>largest){
            largest = sum;
            num=i;
        }
        sum = 0;
    }
    return num;
}

void largestColFirst(int arr[][5],int size){
    int largestCol = largestColNum(arr,size);
    for (int i = 0;i<size;i++){
        swap(arr[i][largestCol],arr[i][0]);
    }
}

void printMatrix(int arr[][5],int size){
    for (int i = 0;i<size;i++){
        for (int j= 0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}