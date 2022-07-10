#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    if ((n & 1)!=1) // or if(n&1==0)
    {
        cout << "Even No";
    }
    else{
        cout << "odd NO";
    }
    
}