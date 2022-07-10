//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void PrefixMax(int arr[],int size)
{
     int mx=-19999999;
    for (int i = 0; i < size; i++)
    {
        mx= max(mx, arr[i]);
        cout<<mx<<" ";
        
    }
    
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    PrefixMax(arr,size);
    
}