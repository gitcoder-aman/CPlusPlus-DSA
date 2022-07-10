#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers:";
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
           cout<<a<<endl; 
        }
        else
        {
            cout<<c;
        }
    }
    else
    {
        if (b>c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c;
        }
        
    }
    return 0;
}