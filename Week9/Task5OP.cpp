#include <iostream>
using namespace std;
bool isAlreadyEntered(int arr[],int size, int number);
main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
        return 0;
    }
    int arr[n];
    int num;
    cout << "Enter " << n << " numbers, one per line:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (i != 0)
        {
            if (isAlreadyEntered(arr,n, num))
            {
                cout << "Already Entered: " << num << endl;
            }
        }
        arr[i] = num;
    }
}

bool isAlreadyEntered(int arr[],int size, int number)
{
    for (int i = 0; i<size; i++)
    {
        if (number == arr[i])
            return true;
    }
    return false;
}