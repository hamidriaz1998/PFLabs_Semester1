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

int calculatePrice(int money, int year){
    int price =0;
    int age = 18;
    for (int i = 1800; i<=year;i++){
        if (i % 2 == 0){
            price += 12000;
        }
        else{
            i += 12000 + 50*age;
        }
        age++;
    }
    money = money - price;
    return money;
}