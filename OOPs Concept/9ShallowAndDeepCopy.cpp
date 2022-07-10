#include<iostream>
#include<string.h>
using namespace std;

class Hero{
 
          private:
          int health;
          public:
          char *name;
          char level;

    Hero(){
        cout << "Simple Constructor Called: "<<endl;
        name = new char[100];
    }
    void print(){
        cout << "[Health: "<< this->health << ",";
        cout << "Level: " <<this->level<< ",";
        cout << "Name: " <<this->name<<"]"; 
        cout << endl <<endl;
    }
    //Deep copy Constructor
     Hero(Hero& temp){
         char *ch = new char[strlen(temp.name) + 1];
         strcpy(ch,temp.name);
         this->name = ch;

         this->health = temp.health;
         this->level = temp.level;
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
    void setName(char name[]){
        strcpy(this->name,name);
    }

};
int main(){
    
    Hero hero1; 
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]  = "Aman";
    hero1.setName(name); 
    cout << "Hero1"<<endl;
    hero1.print();
    
    //use default copy constructor
     Hero hero2(hero1);
   // Hero hero2 = hero1;

    cout << "Hero2"<<endl;
    hero2.print();

    hero1.name[0] = 'M';
    cout << "Hero1"<<endl;
    hero1.print();

    cout << "Hero2"<<endl;
    hero2.print(); //default copy constructor have do sallow Copy in hero2,then name changed  because same memory acess(through before taking pointer)
    
    return 0;

}