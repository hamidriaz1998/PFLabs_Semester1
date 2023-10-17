#include<iostream>
using namespace std;
void generateFibonacci(int length);
main(){
    int n;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>n;
    generateFibonacci(n);
}

void generateFibonacci(int length){
    int a = 0,b=1, Next_Term;
    for (int i = 0;i< length;i++){
        cout<<a;
        if (i != length -1){
            cout<<", ";
        }
        Next_Term = a+ b;
        a = b;
        b = Next_Term;

    }
}