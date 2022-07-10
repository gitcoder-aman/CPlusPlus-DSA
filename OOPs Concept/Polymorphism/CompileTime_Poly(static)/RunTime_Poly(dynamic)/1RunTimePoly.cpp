 // Rules: 
// The method of the parent class and the method of the child class must have the same name.
// The method of the parent class and the method of the child class must have the same parameters.
// It is possible through inheritance only.

#include<iostream>
using namespace std;

class Animal{

    public:
    void speak(){
        cout << "Speaking "<< endl;
    }
};
class Dog : Public Animal{
    public:
    void speak(){
        cout << "Barking " << endl;
    }
};
int main(){

    Dog obj;
    obj.speak();
    return 0;

}