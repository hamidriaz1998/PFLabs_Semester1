#include<iostream>
using namespace std;
void inchestoFeet(float);
main(){

	float inches;
	cout<<"Enter the measurement in inches: ";
	cin>>inches;
	inchestoFeet(inches);

}

void inchestoFeet(float inches){

	float feet;
	feet = inches/12;
	cout<<"Equivalent in feet: "<<feet;

}
