#include<iostream>
using namespace std;
string calculateCost(float budget, string category, int numPeople);
main(){
    float budget;
    int numPeople;
    string category;
    cout<<"Enter the budget: ";
    cin>>budget;
    cout<<"Enter the category (VIP/Normal): ";
    cin>>category;
    cout<<"Enter the number of people in the group: ";
    cin>>numPeople;
    cout<<calculateCost(budget,category,numPeople);
}

string calculateCost(float budget, string category, int numPeople){
    
}