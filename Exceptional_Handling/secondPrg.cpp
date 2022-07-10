#include<iostream>
using namespace std;

int main(){

      int i = 3;
    cout << "Welcome "<< endl;
      try{
          if(i == 1)
          throw 1;
          if(i == 2)
          throw "hello";
          if(i == 3)
          throw 4.5;

        cout << endl << "In try" << endl;
      }
     catch(...){ //any something value will be catch because ...
         cout << endl << "Exceptional No :";
      }
    cout << endl << "Last line "<< endl;
    return 0;

}