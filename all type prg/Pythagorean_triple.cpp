//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(int a,int b,int c)
{
    int x = max(a, max(b,c));
     int y,z;

     if (x == a)
     {
         y=b;
         z=c;
     }
     else if(x == b){
         y=a;
         z=c;
     }
     else{
         y=a;
         z=b;
     }
     
    if ((z*z+y*y)==x*x)
    {
       return true;
    }
    else{
        return false;
    }
    
}
int32_t main()
{
    int a,b,c;
     cin >> a >> b >> c;
    if (check(a,b,c))
    {
        cout<<"Pythagorean triple";
    }
    else{
        cout<<"Not Pythagorean triple";
    }
    

}