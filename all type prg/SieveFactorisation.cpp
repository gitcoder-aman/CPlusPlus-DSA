#include<iostream>
using namespace std;
void sieveFactorisation(int n){

          int spf[n]={0};  // spf=small prime factorisation
        for (int i = 2; i <=n ; i++)
        {
            spf[i]=i;
        }
         for (int i = 2; i <=n ; i++)
         {
             if (spf[i]==i)
             {
                 for (int j = i*i; j <= n; j+=i)
                 {
                     if (spf[j]==j)
                     {
                         spf[j]=i;
                     } 
                 }
             }
         }

         while (n!=1)
         {
             cout << spf[n]<<" ";
             n=n/spf[n];
         }
         
           
           
}
int main(){

    int n;
    cin >> n;
    sieveFactorisation(n);
    return 0;
}