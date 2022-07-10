#include<iostream>
using namespace std;

class complex{

      int a ,b;
      public:
      void setData(int x,int y){
          a = x; b = y;
      }
      void showData(){
          cout << "a" << a << "b" << b;
      }
      complex operator-(){

          complex temp;
          temp.a = -a;
          temp.b = -b;
          return(temp);
      }
};
int main(){

    complex c1,c2;
    c1.setData(3,4);
    c2 = -c1; // or c1.operator-()
    c2.showData();
}