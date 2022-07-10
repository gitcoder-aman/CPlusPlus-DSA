#include<iostream>
#include<string.h>
using namespace std;

class S{

     char str[40];
     public:
     void getData(){
         cin.getline(str,40);
     }
     int operator>(S T){
         int l1,l2;
         l1 = strlen(str);
         l2 = strlen(T.str);
         if(l1 > l2)
         return 1;
         else
         return 0;
     }
     void show_string(){
         cout << endl << "string " << str <<" has greater number of characters";
     }
};
int main(){

     S obj1,obj2;
     obj1.getData();
     obj2.getData();
     if (obj1   >obj2)  // greater operator overloding
        obj1.show_string();
    else
        obj2.show_string();
    return 1;

}