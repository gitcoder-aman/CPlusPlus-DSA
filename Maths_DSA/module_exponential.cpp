#include<iostream>
using namespace std;
//Q- modular exponential codestudio

// link - https://codeforces.com/blog/entry/72527

int modularExponentiation(int x,int power,int mod){
    int res = 1;
    // time complexity = O(logn)
    while(power > 0){
        if( power&1 ){
            //odd
            res = (1LL *res*x)%mod; // type casting use of long long 
          }
        x = (1LL * x *x)%mod;
        power = power >> 1;  // find quioent
    }
    return res;
}
int main(){

    int x = 5,n = 4,m = 10;
   // cin >> x >> n >> m;
   //('X' ^ 'N') % 'M'
   cout << modularExponentiation(x,n,m);
    return 0;
}