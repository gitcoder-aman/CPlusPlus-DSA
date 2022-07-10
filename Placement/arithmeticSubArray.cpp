#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
     int arr[size];
     for(int i=0;i<size;i++){
         cin >> arr[i];
     }
     int ans = 2;
     int pd = arr[1]-arr[0];
     int curr = 2;
     for(int j=2;j<size;j++)
     {
         if(pd == arr[j]-arr[j-1])
         {
             curr++;
         }
         else{
             pd = arr[j] - arr[j-1];
             cout<<pd<<endl;
             curr = 2;
         }
         ans = max(ans,curr);
     }
     cout << ans <<endl;
     return 0;
}