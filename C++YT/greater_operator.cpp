#include<iostream>
#include<string.h>
using namespace std;

class string_type{

    char str[40];
    public:
    void get_string(){
        cout << endl << "Enter string";
        cin.getline(str,40);
    }
    int operator>(string_type T){      // greater operator overloading

        int l1,l2;
        l1 = vowels(str);
        l2 = vowels(T.str);
        if(l1 > l2)
            return 1;
        else
            return 0;
    }
    int vowels(char ch[]){

        int i,v = 0;char c;
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
        cout << endl << str << " has greater no of vowels";
    }
};
int main(){

    string_type obj1,obj2,obj3;
    cout << "\n Enter 1st string:";
      obj1.get_string();
    cout << "\n Enter 2nd string:";
      obj2.get_string();
    cout << "\n Enter 3rd string:";
      obj3.get_string();

      if(obj1 >obj2 && obj1 >obj3)
        obj1.show_string();
        else if(obj2 >obj3)
             obj2.show_string();
             else
               obj3.show_string();

    return 0;

}