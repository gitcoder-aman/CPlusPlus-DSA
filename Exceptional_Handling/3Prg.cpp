#include<iostream>
using namespace std;
void fun(){
    throw 10;  // it's not compulsoury write down in try block you write in a fuction but his function write down in try block
}
int main(){

    int i = 3;
    cout << "Welcome "<< endl;
      try{
          if(i == 3)
        //   throw;
        fun();
        cout << endl << "In try" << endl;
      }
     catch(int e){
         cout << endl << "Exceptional No :"<< e;
      }
    cout << endl << "Last line "<< endl;
    return 0;

}