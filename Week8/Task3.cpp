#include<iostream>
using namespace std;
string plant(string,int,int,int);
// void printFlowers(string,int);
main(){
    cout<<plant("@", 3, 3, 25) <<endl;
    cout<<plant("#", 1, 5, 30)<<endl;
    cout<<plant("&", 5, 1, 20)<<endl;
    cout<<plant("§", 3, 3, 15)<<endl;
}

string plant(string seed,int water,int fert,int temp){
    string plant1 = "";
    int count = water;
    while (count != 0){
    for (int i = 1;i<=water;i++){
        plant1 +="-";
    }
    for (int j = 1; j<= fert; j++){
        plant1 += seed;
    }
    count--;
    }
    // printFlowers(seed,fert);
    return plant1;
}

// void printFlowers(string seed,int fert){
// }