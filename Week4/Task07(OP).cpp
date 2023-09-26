#include<iostream>
using namespace std;
void evenOrOdd(int);
main(){

	int n;
	cout<<"Enter a number: ";
	cin>>n;
	evenOrOdd(n);

}

void evenOrOdd(int number){

	if (number % 2 == 0){
		cout<<"Number "<<number<<" is even";
	}
	if (number % 2 != 0){
		cout<<"Number "<<number<<" is odd";
	}

}