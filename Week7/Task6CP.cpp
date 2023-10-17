#include<iostream> 
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1,int number2);
main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"GCD: "<<calculateGCD(n1,n2);
    cout<<"LCM: "<<calculateLCM(n1,n2);
}