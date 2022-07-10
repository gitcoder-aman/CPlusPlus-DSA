#include<iostream>
using namespace std;
void sievePrime(int n){

    int prime[n]={0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]==0) //Unmarked
        {
            for (int j = i*i; j <=n ; j+=i)
            {
                prime[j]=1;  //Marked
            }
        }
    }
    for (int i = 2; i <=n; i++)
    {
        if (prime[i]==0)
        {
             cout << i<<" ";
        }
    }
}
int main(){

    int n;
    cin >> n;
    sievePrime(n);
    return 0;
}