#include<iostream>
using namespace std;
void passFail(int);
main(){

	int score;
	cout<<"Enter your score: ";
	cin>>score;
	passFail(score);

}

void passFail(int score){

	if (score > 50){
		cout<<"Pass";
	}
	if (score <= 50){
		cout<<"Fail";
	}

}