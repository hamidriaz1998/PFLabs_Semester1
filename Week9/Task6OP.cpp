#include <iostream>
using namespace std;
int findLargestNumber(int arr[], int size);
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

    cout << "Enter " << n << " numbers, one per line:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}