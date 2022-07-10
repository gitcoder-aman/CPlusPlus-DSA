#include<iostream>
using namespace std;
void fib(int n)
{
    int f1=0,f2=1,nextTerm;
    
    for(int i=1;i<=n-2;i++){
        cout<<f1<<" ";
        nextTerm=f2+f1;
        f1=f2;
        f2=nextTerm;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    fib(n);

    return 0;
}