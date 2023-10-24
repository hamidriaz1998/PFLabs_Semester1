#include <iostream>
using namespace std;
string plant(string, int, int, int);
main()
{
    cout << plant("@", 3, 3, 25) << endl;
    cout << plant("#", 1, 5, 30) << endl;
    cout << plant("&", 5, 1, 20) << endl;
    cout << plant("§", 3, 3, 15) << endl;
}

string plant(string seed, int water, int fert, int temp)
{
    string plant1 = "";
    int count = water;
    if (temp >= 20 && temp <= 30)
    {
        while (count != 0)
        {
            for (int i = 1; i <= water; i++)
            {
                plant1 += "-";
            }
            for (int j = 1; j <= fert; j++)
            {
                plant1 += seed;
            }
            count--;
        }
    
    }
    else{
        for(int i =1;i<=water;i++){
            for(int j =1;j<=water;j++){
                plant1 += "-";
            }
        }
        plant1+= seed;
    }
    return plant1;
}
