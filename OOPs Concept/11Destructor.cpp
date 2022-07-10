#include<iostream>
#include<string.h>
using namespace std;

class Hero{

    public:
    ~Hero(){
        cout << "Destructor called "<<endl;
    }

};
int main(){
    
    //static
    Hero a;  //automatically destructor called for static allocation

   //dynamic
    Hero *b = new Hero(); //manually destructor called for dynamic allocation
    delete b; 
   
    return 0;

}