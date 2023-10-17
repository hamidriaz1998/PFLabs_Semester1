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

int totalDigits(int number){
    int DigitsInNumber = 0;
    if (number >= 0 && number <=9){
        return 1;
    }
    while (number != 0){
        number = number/ 10;
        DigitsInNumber++;
    }
    return DigitsInNumber;
}