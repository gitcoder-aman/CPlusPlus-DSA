#include<iostream>
using namespace std;

class B{

    public:
    int a;
    int b;

    void operator+ (B& obj){

        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Output " << value2 - value1 << endl;
    } 
    void operator() () {
        cout << "Main Bracket hu " << this->a << endl;
    }
};
int main(){

    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1.operator+(obj2); // plus operator overloading
    obj1 +obj2;
    obj1();  //braket operator overloading
    return 0;

}