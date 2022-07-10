#include<iostream>
using namespace std;
inline void fun();
int main(){

    cout<< "You are in main";
    fun();
}
void fun(){
    cout << "You are in Fun";
}