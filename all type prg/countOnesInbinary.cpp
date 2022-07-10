#include<iostream>
using namespace std;

int countOnesinBinary(int n)
{
    int count=0;
    while (n) // false while n=0
    {
        n=(n & (n-1));
        cout <<n << endl;
        count++;
    } 
     return count; 
}
int main(){
    int store;
     store=countOnesinBinary(19);
    cout << store<<endl;
}