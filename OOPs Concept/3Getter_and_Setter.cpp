#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;
  public:
    char level;

    void print(){
        cout << level << endl;
    }
    //Getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    //Setter
    void setLevel(char ch){
        level = ch;
    }
    void setHealth(int h){
        health = h;
    }
};
int main(){

      //creation of Object
    Hero ramesh;
    
    ramesh.setHealth(70);
    ramesh.setLevel('A');


    cout << "health is : "<< ramesh.getHealth() << endl;
    cout << "level is : "<< ramesh.getLevel() << endl;
    return 0;

}