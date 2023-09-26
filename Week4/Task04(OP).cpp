#include<iostream>
using namespace std;
void add(int,int);
void sub(int,int);
void mul(int,int);
void divide(float,float);
main(){

	int n1,n2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>n1;
	cout<<"Enter 2nd number: ";
	cin>>n2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;

	if (op == '+'){
		add(n1,n2);
	}

	if (op == '-'){
		sub(n1,n2);
	}

	if (op == '*'){
		mul(n1,n2);
	}

	if (op == '/'){
		divide(n1,n2);
	}
}

void add(int number1, int number2){

	int sum;
	sum = number1 + number2;
	cout<<"Addition: "<<sum;

}

void sub(int number1, int number2){

	int subtract;
	subtract = number1 - number2;
	cout<<"Subtraction: "<<subtract;

}

void mul(int number1, int number2){

	int multiply;
	multiply = number1 * number2;
	cout<<"Multiplication: "<<multiply;

}

void divide(float number1, float number2){

	float division;
	division = (number1 / number2) * 1.0;
	cout<<"Division: "<<division;

}

