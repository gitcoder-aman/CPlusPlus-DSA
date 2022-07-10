#include<iostream>
#include<vector>
using namespace std;

// Sieve of Eratosthenes
//time complexity = O(n * log(log n))
//leetcode = 204 .  Given an integer n, return the number of prime numbers that are strictly less than n.
int countPrime(int n){

    vector<bool>Prime(n+1,true);
      int cnt = 0;
      Prime[0] = Prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if(Prime[i]){
            cnt++;

            for (int j = 2*i; j < n; j+=i)
            {
                Prime[j] = 0;
            }
            
        }
    }
    return cnt;
} 
int main(){

    int n;
    cout << "Enter numbers of prime:"<<endl;
    cin>>n;
   cout << countPrime(n);
    return 0;

}