#include<iostream>
using namespace std;

class Hero{

    //properties
  public:
    char level;

    int health;

    void print(){
        cout << level << endl;
    }
};
int main(){

    //creation of Object
    Hero ramesh;
    
    ramesh.health = 70;
    ramesh.level = 'A';

    cout << "health is : "<< ramesh.health << endl;
    cout << "level is : "<< ramesh.level << endl;

    return 0;

}