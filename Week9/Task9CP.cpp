#include<iostream>
using namespace std;
bool canPayWithChange(double change[],double totalDue);
main(){
    double arr[4];
    double due;
    cout<<"Enter quarters: ";
    cin>>arr[0];
    cout<<"Enter dimes: ";
    cin>>arr[1];
    cout<<"Enter nickels: ";
    cin>>arr[2];
    cout<<"Enter pennies: ";
    cin>>arr[3];
    cout<<"Enter the total amount due: $";
    cin>>due;
    cout<<"Can you pay the amount? ";
    if (canPayWithChange(arr,due))
        cout<<"Yes";
    else
        cout<<"No";
}

bool canPayWithChange(double change[],double totalDue){
    double sum = 0;
    sum += change[0] * 0.25;
    sum+= change[1] * 0.10;
    sum += change[2] * 0.05;
    sum += change[3] * 0.01;
    return sum >= totalDue;
}