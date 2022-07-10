#include<iostream>
using namespace std;
void convert_binary(int n)
{
    int rem,a[20],i=0;
     while (n)
     {
         rem=n%2;
         a[i]=rem;
         i++;
         n/=2;
     }
    for (int j = i-1; j >=0 ; j--)
    {
       cout<<a[j];
    }
    
}
int main(){
    int n;
    cin>> n;
     convert_binary(n);
}