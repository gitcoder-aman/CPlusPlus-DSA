//codestdio
#include<iostream>
using namespace std;

int unique_through_Bit(int arr[],int size){

        int ans = 0;
     for (int i = 0; i < size; i++)
     {
         ans = ans^arr[i];
     }
     return ans;

}
int main(){

   int arr[15];
     int M;
     int itrate;
     cin >> itrate;

     for(int i = 1 ; i <= itrate; i++)
     {
         cin >> M; // Input size odd| Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
         int size = (2*M+1);
        for (int i = 0; i < size; i++)
        {
          cin >> arr[i];
        }
     
       cout << unique_through_Bit(arr,size) << " ";
     }
    
    return 0;

}