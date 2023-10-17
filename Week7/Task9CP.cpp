#include<iostream>
using namespace std;
int calculatePrice(int money, int year);
main(){
    int money,year;
    cout<<"Enter Money: ";
    cin>>money;
    cout<<"Enter Year: ";
    cin>>year;
    int result = calculatePrice(money,year);
    
}