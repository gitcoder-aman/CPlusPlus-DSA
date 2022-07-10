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
    
    //use default copy constructor
     Hero hero2(hero1);

    hero1.name[0] = 'M';
    
    cout << "Hero1"<<endl;
    hero1.print();

    cout << "Hero2"<<endl;
    hero2.print(); 
    
    hero1 = hero2; //copy Assignment

     hero1.name[0] = 'M';
    cout << "Hero1"<<endl;
    hero1.print();

    cout << "Hero2"<<endl;
    hero2.print();

    return 0;

}