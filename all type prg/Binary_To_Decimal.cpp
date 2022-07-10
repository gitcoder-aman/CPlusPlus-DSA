#include<iostream>
#include<math.h>
using namespace std;
int Convert_decimal(int n)
{
    int rem,Find=0,i=-1;
    while (n>0)
    {
        i++;
        rem=n%10;
        Find=Find+rem*pow(2,i);
        n/=10;
    }
    return Find;
}
int main(){
    int n,Find;
    //cout<<"Enter a Binary Number";
    cin >> n;
    Find=Convert_decimal(n);
    cout << Find;
}