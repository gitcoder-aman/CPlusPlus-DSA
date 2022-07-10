#include<iostream>
#include<string.h>
using namespace std;

class S{

     char str[40];
     public:
     void getString(){
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
     int vowels(char ch[]){
         int i,v = 0;
         char c;
         for (int i = 0; i < strlen(ch); i++)
         {
             c = toupper(ch[i]);
             if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                 v++;
             }
         }
         return v;
         
     }
     void show_string(){
         cout << endl << "string " << str <<" has greater number of vowels";
     }
};
int main(){

     S obj1,obj2;
     obj1.getString();
     obj2.getString();
     if (obj1   >obj2)  // greater operator overloding  // obj1.operator>(obj2)
        obj1.show_string();
    else
        obj2.show_string();
    return 1;

}