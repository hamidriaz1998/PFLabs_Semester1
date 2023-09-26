#include<iostream>
using namespace std;
void calculateFuel(float);
main(){

	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	calculateFuel(distance);

}

void calculateFuel(float d){

	int fuel;
	fuel = 10 * d;
	if (fuel >= 100){
		cout<<"Fuel needed: "<<fuel;
	}
	if (fuel < 100){
		fuel = 100;
		cout<<"Fuel needed: "<<fuel;
	}

}