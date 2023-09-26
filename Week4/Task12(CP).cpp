#include<iostream>
using namespace std;
void calculatePayableAmount(string,int);
main(){

	string day;
	int amount;
	while(true){
		cout<<"Enter the day of purchase: ";
		cin>>day;
		cout<<"Enter the total purchase amount: $";
		cin>>amount;
		calculatePayableAmount(day,amount);
}

}

void calculatePayableAmount(string day, int amount){

	float discount = 0;
	int total;
	if (day == "Sunday"){
		discount = amount * 10/100;
		total = amount - discount;
	}
	if (day != "Sunday"){
		discount = amount * 5/100;
		total = amount - discount;
	}
	cout<<"Payable Amount: $"<<total<<endl;

}
