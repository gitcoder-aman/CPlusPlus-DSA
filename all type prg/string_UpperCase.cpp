#include<iostream>
using namespace std;
int main(){

    string str="reAdYtoraCe";
    //convert into UpperCase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout << str << endl;
    //convert into LowerCase
     for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout << str <<endl;
    
}