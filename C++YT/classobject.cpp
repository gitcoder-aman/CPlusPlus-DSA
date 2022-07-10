#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void set_data(int x, int y){
        a = y; b = x;
    }
    void show_data(){
        cout << "a="<< a << "b=" << b<< endl;
    }
};
int main(){

    complex c1; // c1 is an object
    //c1.a=5; // not accessed beacuse a,b variable are private 
    c1.set_data(3,4);
    c1.show_data();
    
}