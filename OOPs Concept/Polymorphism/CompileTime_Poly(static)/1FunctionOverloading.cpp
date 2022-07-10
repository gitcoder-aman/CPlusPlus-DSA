#include<iostream>
using namespace std;

class A {
        
        public:
        void sayHello() {
            cout << "Hello Aman " << endl;
        }
        void sayHello(string name) {
            cout << "Hello Aman " << endl;
        }
        int sayHello(char name) {
            cout << "Hello Aman " << endl;
            return 1;
        }

};
int main(){

    A obj;
    obj.sayHello();
    return 0;

}