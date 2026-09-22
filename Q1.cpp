#include<iostream>
#include<bits/stdc++.h>
using namespace std;
inline double cube(double n){
    return n*n*n;
}
int main() {
  double num;
  cin>>num;
  cout<<"Cube of "<<num<<" is : "<<cube(num)<<endl;
  return 0;
}