#include<iostream>
using namespace std;
void print(){
    cout<<endl;
}
template<typename T, typename...Args>
void print(T first,Args... reset){
    cout<<first<<" ";
    print(rest...);
}
int main() {
  print(10,20.5,"c++");
  return 0;
}