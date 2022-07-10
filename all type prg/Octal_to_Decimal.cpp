#include<iostream>
#include<math.h>
using namespace std;
int Octal_to_decimal(int n)
{
    int rem;
   int store=0,i=0;
    while (n)
    {
        rem=n%10;
        store=store+ rem * pow(8,i);
        i++;
        n/=10;
    }
    return store;
}
int main()
{
    int n,Find;
    cin>>n;
   Find= Octal_to_decimal(n);
   cout<<Find<<" Decimal";
}