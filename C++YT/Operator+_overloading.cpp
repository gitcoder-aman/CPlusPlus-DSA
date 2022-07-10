#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

class string_add{

    char ch[40];
    public:
    void get_string(){
        cout << "Enter any string";
        cin.getline(ch,40);
    }
    string_add operator+(string_add T){
        string_add temp;
        strcpy(temp.ch,ch);
        strcat(temp.ch," ");
        strcat(temp.ch,T.ch);
        return (temp);
    }
    void show_string(){
        cout << ch;
    }
};
int main(){

    string_add str1,str2,str3;
    str1.get_string();
    str2.get_string();
    str3 = str1 +str2; // str1.operator+(str2)
    
    cout << "\nFirst string is:";
    str1.show_string();
    cout << "\n2nd string is:";
    str2.show_string();
    cout << "\nAfter coucating:";
    str3.show_string();
    
    return 0;

}