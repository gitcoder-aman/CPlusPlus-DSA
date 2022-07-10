#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
       int maxSum=INT_MIN;
       
    for (int i = 0; i < size; i++)
    {
         for (int j = i; j < size; j++)
         {
             int sum=0;
            for (int k = i; k <= j; k++)
            {
                sum+=a[k];
            }
          maxSum = max(maxSum,sum);   
         }
    }
    
    cout << maxSum;
}