#include<iostream>
using namespace std;
class Test{
     public:
     void show(){
        cout<<"Address using this : "<<this<<endl;
     }
     private:
     int data;
     
};
int main() {
  Test t1;
  cout<<"Address of t1 : "<<&t1<<endl;
  t1.show();
  return 0;
}