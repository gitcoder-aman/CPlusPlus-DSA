
#include<iostream>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    // private:
    int age;

    public:
    int getAge() {
        return this->age;
    }
    void setWeight(int w) {
        this->weight = w;
    }
};
class Male: public Human{
             
    public:
    string color;
    void sleep() {
        cout << "Male Sleeping "<<endl;
    }
};
int main(){

    Male object1;
    cout << object1.age << endl; //garbage value
    cout << object1.weight << endl; //garbage value
    cout << object1.height << endl;  //garbage value

    cout << object1.color << endl;   //garbage value
    object1.sleep();
    object1.setWeight(84);
    cout << object1.weight << endl;

    return 0;

}
//Private data member  of any class cannot be inheritances