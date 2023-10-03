#include<iostream>
using namespace std;
string OddishOrEvenish(int);
main(){

    int n;
    string result;
    cout<<"Enter a five-digit number: ";
    cin>>n;
    result = OddishOrEvenish(n);
    cout<<result;

}

string OddishOrEvenish(int num){

    int d1,d2,d3,d4,d5,sum;
    d1 = num % 10;
    num /= 10;
    d2 = num % 10;
    num /= 10;
    d3 = num % 10;
    num /= 10;
    d4 = num % 10;
    num /= 10;
    d5 = num % 10;
    num /= 10;
    sum = d1+d2+d3+d4+d5;
    if (sum % 2 != 0){
        return "Oddish";
    }
    if (sum % 2 == 0){
        return "Evenish";
    }
}