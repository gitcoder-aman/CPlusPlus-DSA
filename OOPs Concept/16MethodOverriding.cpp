#include<iostream>
using namespace std;

class A{
    public:
    void func1() {  }
    void func2() {  }
};
class B:public A{
    
    public:
    void func1(){ //Method Overriding

     cout << "called func1 "<< endl;
      } 
    void func2(int x){  // Method Hiding
     cout << "called func2 "<< endl;

     } 

};
int main(){

    B obj;
    obj.func1(); //go in B
  //  obj.func2(); //error
    obj.func2(4); //go in B
    return 0;

}