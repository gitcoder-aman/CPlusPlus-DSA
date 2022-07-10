/* Base class member Access Specifier | Public          |  Protected      |  Private
                                      |                 |                 |  
    Public                            | Public          |  protected      |  Private
    Protected                         | Protected       |  protected      |  Private
    Private                           | Not Accessible  |  Not Accessible |  Not Accessible 
*/


#include<iostream>
using namespace std;

class Human{

    public:
    int height = 5;
    int weight = 84;
    // private:
    int age = 20;

    public:
    int getAge() {
        return this->age;
    }
    void setWeight(int w) {
        this->weight = w;
    }
};
class Male: protected Human{
             
    public:
    string color;
    void sleep() {
        cout << "Male Sleeping "<<endl;
    }
    int getHieght(){
        return this->height;
    }
};
int main(){

    Male m1;
  //  cout << m1.height << endl; // Not access because child class marked Protected
    cout << m1.getHieght() << endl;

    return 0;

}
