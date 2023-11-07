#include <iostream>
using namespace std;
string howBad(int);
int toBinary(int);
int digitSum(int);
main()
{
    cout << howBad(7) << endl;
    cout << howBad(17) << endl;
    cout << howBad(23) << endl;
}

int digitSum(int n){
    int sum =0;
    while (n!=0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int toBinary(int n){
    string num = "";
    while(n!=0){
        num += to_string(n/2);
        n /= 2;
    }
}