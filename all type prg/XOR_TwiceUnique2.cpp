#include<iostream>
using namespace std;
int setBit(int num,int pos)
{
    return(num & (1 << pos)!=0);
}
void Twounique(int arr[],int n)
{
    int res=0,xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int temp;
    temp = xorsum;
    //Right most set Bit Find Program
     
     int  pos = 0;
    while (xorsum)
    {
        pos++;
        xorsum = xorsum >> 1;
    }
    int  newxorsum = 0;
   for (int i = 0; i < n; i++)
   {
       if (setBit(arr[i],pos-1))
       {
           newxorsum = newxorsum^arr[i];
       }
   }
   cout << newxorsum<<endl;
   cout << (temp^newxorsum)<<endl;
}
int main()
{
    int arr[]={5,4,1,4,3,5,1,2};
     Twounique(arr,8);
     return 0;
}