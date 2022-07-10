#include<iostream>
using namespace std;
void increment(int  a)
{
    a++;
}
int main()
{
    int a=2;
    increment(a);
    cout << a << endl; // call by value // only value is going in function
    return 0;
}