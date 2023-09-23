#include<iostream>
using namespace std;
main(){

	int result,population,n;
	cout<<"Enter the current world population: ";
	cin>>population;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>n;
	result = population + n*12*30;
	cout<<"The population in three decades will be: "<<result;
}
