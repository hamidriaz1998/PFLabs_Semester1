#include<iostream>
using namespace std;
int frequencyChecker(int,int);
main(){
    int n,digit;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the digit to check: ";
    cin>> digit;
    int frequency = frequencyChecker(n,digit);
    cout<<"Frequency: "<<frequency;
}
