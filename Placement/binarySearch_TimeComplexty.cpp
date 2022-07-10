#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int s=0;
    int e=size;
    while (s<=e)            //Time Complexity= O(log base 2 size)
    {
        int mid=(s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return -1;
    
} 
int main()
{
     int size,key;  
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];      // Inputing must be accending order
    }
  //  cout<<"Enter Search Element";
    cin>>key;
    cout<<binarySearch(arr,size,key)<<endl;;
}