#include<iostream>
using namespace std;

class Hero{

     public:
     Hero() //constructor
     {
         cout << "constructor called:"<<endl;
     }
};
int main(){
    
    //static allocation
    Hero ramesh;

    //dynamically allocation
    Hero *h = new Hero();
    return 0;

}