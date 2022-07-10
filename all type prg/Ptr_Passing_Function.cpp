#include<iostream>
using namespace std;
// void swap(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     int a=2;
//     int b=4;
//     swap(a,b); // call by value //only value going in function
//     cout << a << " " << b << endl;
// }

void swap(int *a,int *b)
{
    int temp =*a;
     *a = *b;
     *b = temp;
}
int main()
{
    int a=2,b=4;
    swap(&a,&b);// call by references // address is going in function
    cout << a << " "<< b << endl;
}