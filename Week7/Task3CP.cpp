#include<iostream>
using namespace std;
int totalDigits(int);
main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result = totalDigits(n);
    cout<<"Total number of digits: "<<result;
}