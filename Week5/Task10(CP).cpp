#include<iostream>
#include<string>
using namespace std;

main(){

    int n;
    string w;
    cout<<"Enter a number (1-99): ";
    cin>>n;
    w = to_wstring(n);
    cout<<w;

}