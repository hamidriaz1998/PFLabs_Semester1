#include<iostream>
using namespace std;
void eligible(int);
main(){

	int age;
	cout<<"Enter your age: ";
	cin>>age;
	eligible(age);

}

void eligible(int age){

	if (age >= 18){
		cout<<"You are eligible to vote.";
	}
	if (age < 18){
		cout<<"You are not eligible to vote.";
	}
}