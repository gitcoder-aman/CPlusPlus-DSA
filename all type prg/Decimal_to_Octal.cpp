#include<iostream>
#include<math.h>
using namespace std;
void Decimal_to_Octal(int n)
{
    int rem;
   int a[10],i=0;
    while (n)
    {
        rem=n%8;
      a[i]=rem;
        i++;
        n/=8;
    }
     for (int j = i-1; j >= 0; j--)
     {
         cout<<a[j];
     }
     
}
int main()
{
    int n,Find;
    cin>>n;
   Decimal_to_Octal(n);
}