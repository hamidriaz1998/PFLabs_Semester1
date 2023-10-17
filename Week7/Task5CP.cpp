#include<iostream>
using namespace std;
int digitSum(int number);
main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = digitSum(n);
    cout<<"Sum of digits: "<<sum;
}

