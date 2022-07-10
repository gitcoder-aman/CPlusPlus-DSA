#include<iostream>
using namespace std;

class Hero{
 
         public:

        int health;
        char level;
     
};
int main(){

      //creation of Object
    Hero ramesh;
    
    cout << "Size of Ramesh is : " << sizeof(ramesh) << endl;
    // how to output of size of ramesh is 8 here int = 4 bytes and char = 1 byte use in this class
    return 0;

}