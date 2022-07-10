#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    cout << *ptr << endl;

    int **q = &ptr;
    cout << *q << endl;
    cout << **q << endl;
}