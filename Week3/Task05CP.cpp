#include<iostream>
using namespace std;
main(){

	float agg,matric,inter,ecat;
	string name;
	cout<<"Enter the student's name: ";
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>matric;
	cout<<"Enter intermediate marks (out of 550): ";
	cin>>inter;
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>ecat;
	agg = ((ecat/400)*0.5 + (matric/1100)*0.1 + (inter/550)*0.4)*100;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<agg<<"\%";

}
