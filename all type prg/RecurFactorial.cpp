#include<iostream>
using namespace std;
int factorial(int n)
{

    if (n==0)
    {
        return 1;
    }
    
    int Prevfact = factorial(n-1);
    return n*Prevfact;             //5-1X2X3X4X5 = 120
}
int main(){

    int n;
    cin >> n;
    cout<<factorial(n)<<endl;
    return 0;
}