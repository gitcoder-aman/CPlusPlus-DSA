#include<iostream>
using namespace std;

class Hero{
 
          private:
    int health;
  public:
    char level;

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
    
    //static allocation 
    cout << "Static allocation"<<endl;
    Hero a;   
    a.setHealth(80);
    a.setLevel('B');
     cout << "level is " << a.level<< endl;
     cout << "health is " << a.getHealth()<< endl;

    
    // dynamically allocation

    cout << "Dynamically Allocation"<<endl;
    Hero *b = new Hero;

    b->setLevel('A');
    b->setHealth(70);

    cout << "level is " << (*b).level<< endl;
    cout << "health is " << (*b).getHealth()<< endl;

    cout << "level is " << b->level<< endl;
    cout << "health is " << b->getHealth()<< endl;


    return 0;

}