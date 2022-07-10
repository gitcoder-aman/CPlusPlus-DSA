#include<iostream>
using namespace std;
int main()
{
    int saving;
    cout<<"Enter Your Saving Amount:=";
    cin>>saving;

    if (saving>5000)
    {
           if (saving>10000)
           {
               cout<<"Road trip With Neha";
           }
           else
           {
               cout<<"Shopping With Neha";
           }     
    }
    else if (saving>2000)
    {
        cout<<"Rashami\n";
    }
    else
    {
        cout<<"Friend";
    }  
}