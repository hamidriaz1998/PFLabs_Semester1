#include<iostream>
using namespace std;
bool doesBrickFit(int,int,int,int,int);
main(){
    int wB,hB,bB,wH,hH;
    cout<<"Enter width of brick: ";
    cin>>wB;
    cout<<"Enter height of brick: ";
    cin>>hB;
    cout<<"Enter breadth of brick: ";
    cin>>bB;
    cout<<"Enter the width of hole: ";
    cin>>wH;
    cout<<"Enter the height of hole: ";
    cin>>hH;
    cout<<doesBrickFit(wB,hB,bB,wH,hH);
}