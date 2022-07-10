#include<iostream>
using namespace std;
int linearSearch(int arr[],int count,int key)
{
       for (int i = 0; i < count; i++)
       {
           if (arr[i]==key)
           {
               return i+1;         //  Time complexity is this program = O(count)
           }
           
       }
       return -1;
       
}
int main()
{
    int count,key;  
    cin>>count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter Search Element";
    cin>>key;
    cout<<linearSearch(arr,count,key)<<endl;;
    
}