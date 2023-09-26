#include<iostream>
using namespace std;
void fuel();
main(){
	fuel();
}

void fuel(){
	
	float distance;
	int fuel;
	cout<<"Enter the distance: ";
	cin>>distance;
	fuel = distance * 10;
	cout<<"Fuel needed: "<<fuel;
}
