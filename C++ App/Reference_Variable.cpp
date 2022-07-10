#include<iostream>
using namespace std;
int main()
{
    int x=10;

    int &y=x; 
    cout << "x=" << x << ",y="<<y<<endl;
     cout << "&x=" << &x << ",&y="<<&y<<endl;

    y=20;
    cout << "x="<<x << ",y=" <<y;
}