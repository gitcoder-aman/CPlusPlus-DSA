//wrapping up data member & function
/*Encapsulation Adv -> Data Hide(security)
                       if we want, we can make class "Read Only"*/

#include<iostream>
using namespace std;

class Student{

    private:
       string name;
       int age;
       int height;
    public:
      int getAge(){
          return this->age;
      }
};
int main(){

    Student first;
    cout << "Sab shi chal rha hai " << endl;
    return 0;

}