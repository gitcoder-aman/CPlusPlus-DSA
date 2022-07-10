//Function Overloading
//function can be same but arguments are different
#include<iostream>
using namespace std;
float area(int);
int area(int,int);
int main(){

    int r;
    cin>>r;
    float A=area(r);  // Early Binding 
    cout<<"Area of circle"<<A;

    int l,b,a;
    cin >>l >>b;
    a=area(l,b);
    cout<<"area of Rectangle is"<<a;
}
float area(int R){
    return (3.14*R*R);
}
int area(int L,int B){
    return(L*B);
}