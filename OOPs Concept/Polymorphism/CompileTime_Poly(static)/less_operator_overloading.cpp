#include<iostream>
#include<string.h>
using namespace std;

class st{

    char str[40];
    public:
    void get_string(){
        cin.getline(str,40);
    }
    int operator<(st T){
        int n;
      n = strcmpi(str,T.str);
      cout << n;
        if (n < 0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    void show_string(){
        cout << endl << str << " comes first";
    }
};
int main(){

    st obj1,obj2;
    cout << "Enter first string:"<<endl;
    obj1.get_string();
    cout << "Enter second string:"<<endl;
    obj2.get_string();

    if(obj1 <obj2){
        obj1.show_string();
    }
    else
        obj2.show_string();

    return 0;

}