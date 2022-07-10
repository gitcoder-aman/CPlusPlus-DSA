#include<iostream>
using namespace std;

class Hero{
 
          private:
    int health;
  public:
    char level;

    Hero(int health){   //Parametrized Constructor
        cout << "Address of this "<<this << endl;
        this -> health = health; // this is a pointer and stored in current address
    }
    Hero(int health,char level){  //Parametrized Constructor
        this->level  = level;
        this->health = health;
    }
    void print(){
        cout << health<< endl;
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
    
    Hero ramesh(10);
    cout << "Address of ramesh "<< &ramesh << endl;   
    ramesh.getHealth();
    ramesh.setHealth(10);
    ramesh.setLevel('B');
    ramesh.print();
    
    //dynamic
    Hero *h = new Hero(11);
    h->print();// garbage value

    Hero temp(22,'B');
    temp.print();

    return 0;

}