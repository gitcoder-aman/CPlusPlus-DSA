#include<iostream>
#include<string.h>
using namespace std;

class string_type{
   char str[40];
   public:
   string_type(){     // constructor
       strcpy(str,"India won");
   }
   int vowels(){
       int i,v = 0;
       char ch;

       for (int i = 0; i < strlen(str); i++)
       {
           ch = toupper(str[i]);
           if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
               v++;
           }
       }
       return v;
   }
   void show_string(){
       cout << endl << str;
   }
};
int main(){

    string_type obj;
    cout << "\nDisplay string=";
    obj.show_string();

    cout << "\nNo of vowels="<<obj.vowels();

    return 0;

}