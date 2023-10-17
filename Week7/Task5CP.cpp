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

int digitSum(int number){
    int Obtained_digit = 0,sum=0;
    while (number != 0){
        Obtained_digit = number %10;
        number = number /10;
        sum += Obtained_digit;
    }
    return sum;
}   