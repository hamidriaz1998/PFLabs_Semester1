#include<iostream>
using namespace std;
float perimeter(char,float);
main(){
    char shape;
    float value;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>shape;
    cout<<"Enter the value: ";
    cin>>value;
    float result = perimeter(shape,value);
    cout<<"The perimeter is: "<<result;
}

float perimeter(char shape,float value){
    if (shape == 's'){
        return 4*value;
    }
    if (shape == 'c'){
        return 6.28 * value;
    }
    if (shape == 't'){
        return 3 * value;
    }
    if (shape == 'h'){
        return 6* value;
    }
}

