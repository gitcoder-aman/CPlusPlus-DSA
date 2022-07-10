#include<iostream>
#include<math.h>
using namespace std;

unsigned long long factorial(int n)
{
    const unsigned int M = 1000000007; // m = 10^9 + 7
    unsigned long long f = 1;
 
    for (int i = 1; i <= n; i++)
        f = f * i;  // WRONG APPROACH as
                    // f may exceed (2^64 - 1)
 
    return (f % M);
}
int main(){

    int n = 13;
    cout << factorial(n);
    return 0;

}