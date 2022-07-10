#include<iostream>
using namespace std;

class Hero{
     public:
     
    static int timeToComplete;
};
int Hero::timeToComplete = 5;

int main(){

    cout << Hero::timeToComplete << endl;   //belong to class use better

    Hero a;
    cout << a.timeToComplete << endl; // belong to object

    Hero b;
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;
    return 0;

}