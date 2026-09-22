#include<iostream>
using namespace std;
// class Test{
//   const int i;
//   public:
//   void show(int x){
//     i=x;  //compile time error here
//   }
// };
class Test{
  const int i=10; // is i ke value change nhi chahe tum perameter he pass karke kyu na change kare constructor ke through ho jayenga
  public:
  void show(){
    cout<<"The value of i : "<<i<<endl;
  }
};
int main() {
  Test t;
  t.show();
}