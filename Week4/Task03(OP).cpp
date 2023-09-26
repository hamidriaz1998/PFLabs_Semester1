#include<iostream>
using namespace std;
void howManyStickers(int);
main(){

	int l;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>l;
	howManyStickers(l);

}

void howManyStickers(int length){

	int stickers;
	stickers = length * length * 6;
	cout<<"Number of stickers needed: "<<stickers;

}