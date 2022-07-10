#include<iostream>
using namespace std;
bool getBit(int n,int pos){
    return((n & (1<<pos))!=0);
}
int setBit(int n,int pos){
    int mask;
    mask = 1 << pos;
    return (n | mask); 
}
int uniqueInThriceTime(int arr[],int n)
{
      int result=0;
    for (int i = 0; i < 64; i++)
    {
        int count = 0;
     for (int j = 0; j < n ; j++)
       {
           
          if (getBit(arr[j],i))
          {
              count++;
          }
       }
       
       if (count % 3!=0)
       {
           result = setBit(result,i);
       }
    }
      return result;
     
   
    
}
int main(){

   int arr[]={2,2,1,5,1,1,2};
    cout << uniqueInThriceTime(arr,7)<<endl;
    return 0;
}