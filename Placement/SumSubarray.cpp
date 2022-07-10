#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cin >> n;
    cin >> s;
    int a[n];
     for (int i = 0; i < n; i++)
     {
         cin >> a[i];
     }
     int min = -1;
     int sum = 0;
     int i=0,j=0,st = -1, en = -1;
     while(i<n && sum+a[i] <= s)
     {
        
             sum +=a[i];
             i++;    
         
     }
     if (sum == s)
     {
         cout << j+1 << " " << i <<endl;
         return 0;
     }
     while (i < n)
     {
         sum += a[i];
         while (sum > s)
         {
             sum -= a[j];
               j++;
         }
         if (sum == s)
         {
             st = j + 1;
             en = i +1;
             break;
         }
         i++;   
     }
     cout << st << " " << en << endl;
}