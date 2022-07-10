#include<iostream>
using namespace std;
class A{
private:
int a;
public:
void setValue(int k){
    a = k;}
void showData(){
   cout << a;
}
};
class B:public A{
  public:
  void setData(int x){
    setValue(x);}
};
int main(){
   B obj;
   obj.setData(4);
   obj.showData();
}