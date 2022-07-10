#include<iostream>
using namespace std;

int score = 15; // bad practice because score variable will be changed
void a(int& i){

    cout << score << " in a " << endl;
    score++;// dangerous code, reference is best practice for accessing variable 
}
void b(int& i){
    cout << score << " in b "<< endl;
    cout << i << endl;
}
int main(){

    cout << score << " in main " << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;

}