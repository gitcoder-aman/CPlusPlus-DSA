#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;

    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage1 - Inside If";
    }
    else
    {
        cout << "stage2 - Inside else";
    }
   cout << a << " " << b << endl;   
}