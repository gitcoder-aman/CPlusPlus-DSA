#include<iostream>
using namespace std;
void possibleSubsetOfSet(int arr[],int n)
{
    int s;
    for (int i = 0; i < (1<<n); i++) // 2^n=(1<<n)
    {
         for (int j = 0; j < n; j++)
         {
              s=(i & (1<<j));
              cout<<i <<"&"<< (1<<j)<<" ";
              cout <<s <<" ";
               if (i & (1<<j))
             {
                 cout <<"="<<arr[j]<<" ";
             }
             else{
                 cout << "   ";
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