#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=new int();
    cout << *p<<endl;//0
    *p=10;
    cout << *p << endl;//10
     delete(p);
     p=new int[4];
     cout << p<< endl;
    // cout <<a <<endl;
     delete[]p;
    
     p=NULL;
     return 0;
}