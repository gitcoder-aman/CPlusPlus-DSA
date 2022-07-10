#include<iostream>
using namespace std;
class Integer{

      int x;
      public:
      void setData(int a){
          x = a;
      }
      void showData(){
          cout << "a" << x;
      }
      Integer operator++(){
          Integer i;
          i.x = ++x;   // Pre Incremenet
          return i;
      }
      Integer operator++(int){ //Just taking int because compiler undrstood prototype function.

          Integer i;
          i.x = x++;     //post Increament
          return i;
      }
};
int main(){

    Integer i1,i2;
    i1.setData(3);
    i1.showData();
    i2 = i1++;
    i1.showData();
    i2.showData();
}