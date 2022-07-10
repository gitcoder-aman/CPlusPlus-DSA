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
class GermanShepherd: public Dog {

};
int main(){

   GermanShepherd g;
   g.speak();

   return 0;

}