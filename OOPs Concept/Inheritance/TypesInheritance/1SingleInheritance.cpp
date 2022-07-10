#include<iostream>
using namespace std;

class Animal{

    public:
    int age = 20;
    int weight = 40;

    public:
    void speak(){
        cout << "Speaking "<< endl;
    }
};
class Dog: public Animal {

};
int main(){

    Dog d;
    d.speak();
    cout << d.age << endl;
    return 0;

}