#include <iostream>
#include <cmath>
using namespace std;
main()
{

    float dis, angle, height;
    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> dis;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angle;
    angle = angle / 57.2958;
    height = dis * tan(angle);
    cout << "The height of the tree is: " << height << " feet";
}