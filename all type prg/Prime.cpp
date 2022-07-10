#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a Number"<<endl;
    cin>>n;
     
     for (i = 2; i < n; i++)
     {
         if (n%i==0)
         {
             cout<<"This no is not Prime";
             break;
         }
     }   
     if(i==n)
     cout<<n<<" Number is prime No"<<endl;
}