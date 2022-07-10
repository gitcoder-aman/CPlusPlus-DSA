#include<iostream>
using namespace std;

int main(){

    cout << "Welcome "<< endl;
      try{
         throw 10;   // single write in code
        cout << endl << "In try" << endl;
      }
     catch(int e){
         cout << endl << "Exceptional No :"<< e;
      }
      catch(int e){
         cout << endl << "Exceptional No :"<< e;
      }
    cout << endl << "Last line "<< endl;
    return 0;

}