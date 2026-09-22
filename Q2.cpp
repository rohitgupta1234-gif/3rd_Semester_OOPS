#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const double PI = 3.14159;
double area(double radius){
    return PI*radius*radius;
}

int area(int side){
    return side*side;
}

double area(double lenght,double breadth){
    return lenght*breadth;
}
int main() {
    cout<<"Area Of Circle (r=5.0) : "<<area(5.0)<<endl;
    cout<<"Area of Square (side=4): "<<area(4)<<endl;
    cout<<"Area of rectangle (5.0 * 3.0): "<<area(5.0,3.0)<<endl;
    return 0;

}
