#include<iostream>
using namespace std;

class Hero{
 
          private:
        int health;
          public:
         char level;

  
  Hero(){
      cout << "Simple Constructor Called: "<<endl;
  }
    void print(){
        cout << "Health "<<this->health<< endl;
        cout << "Level "<<this->level << endl;
    }
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }
    //self make Copy Constructor
    Hero(Hero& temp){
        cout << "Copy Constructor Called: "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    } 
    
     
};
int main(){
    
    Hero S(70,'C');
    // S.setHealth(70);
    // S.setLevel('C');
    S.print();
    
    //Copy Constructor self called
    Hero R(S);
    R.print();

    return 0;

}