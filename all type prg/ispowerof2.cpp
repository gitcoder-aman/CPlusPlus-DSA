#include<iostream>
using namespace std;

bool ispowerof2(int n)
{
    int x;
    x=(n && !(n & n-1));
    return x;
} 
int main()
{
    cout<<ispowerof2(8)<<endl;
    return 0;
}