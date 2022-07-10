#include<iostream>
#include<string.h>
using namespace std;

int main(){
   
   string str = "car";
   string str2 = "Mar";
    if(str.compare(str2) == 0){
        cout << "Same string";
    }
    else{
        cout << "Differenet String"<< endl;
    }
    return 0;

}