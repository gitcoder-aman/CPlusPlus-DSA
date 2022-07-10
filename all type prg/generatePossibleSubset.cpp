#include<iostream>
using namespace std;
void possibleSubsetOfSet(int arr[],int n)
{
    for (int i = 0; i < (1<<n); i++)
    {
         for (int j = 0; j < n; j++)
         {
             if (i & (1<<j))
             {
                 cout <<arr[j]<<" ";
             }
         }cout << endl;
         
    }
    
}
int main()
{
    int store;
    int arr[3]={1,2,3};
     possibleSubsetOfSet(arr,3);
}