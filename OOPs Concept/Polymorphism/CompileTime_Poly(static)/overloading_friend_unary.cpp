// Overloading of binary operator as a friend function
#include<iostream>
using namespace std;

class complex{

    int a,b;
    public:
    void setData(int x,int y){
        a = x; b = y;
    }
    void showData(){
        cout << "a=" << a << "b=" << b;
    }
    friend complex operator-(complex);
};
complex operator-(complex X){
     complex temp;
     temp.a = -X.a;
     temp.b = -X.b;
     return (temp);
}
int main(){

    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);

    c3 = -c2;
    c1.showData();
    c3.showData();

    return 0;

}