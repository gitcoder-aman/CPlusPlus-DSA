#include<iostream>
using namespace std;
class complex
{
    private:
      int a,b;
    public:
      void set_data(int, int);
      void show_data(){
      cout << "a="<< a << "b=" << b<< endl;
      }
};
void complex::set_data(int x,int y){   // make inline // membership level
    a = y;
    b = x;
}
int main(){
      
      complex c1; // c1 is an object
      c1.set_data(3,4);
      c1.show_data();

}