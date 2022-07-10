#include<iostream>
using namespace std;

//not need to create object
//so this (pointer to current object) keyword not use because object are not available
//static function access to only static memeber 
class Hero{

     public:
     int health;
     int level;
     static int timeToComplete; //static member

    static int random(){
      return timeToComplete; 
    //   return health; // Not acess because this member is not static member
    }
};
 int  Hero::timeToComplete = 5;
int main(){

    cout << Hero::random() << endl;
    return 0;

}