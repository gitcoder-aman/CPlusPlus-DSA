#include<iostream>
using namespace std;

class Account{
     
     public:
    int balance;  // Instance member variable
    static float roi; // static member variable / class variable
    public:
    void SetBalance(int b){
        balance = b;
    }

     static void SetRoi(float r){ // static member function
        roi = r;
        cout << roi;
    }
};
 float Account :: roi = 3.5f;    // membership variable
int main(){
      
      Account a1, a2;
      a1.SetRoi(4.5f);  // without static
      Account :: SetRoi(4.5f); // with static

}