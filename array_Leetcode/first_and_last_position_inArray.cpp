#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){ // Time complexity O(logn)

     int s = 0;
     int e = size - 1;
     int mid = 0;
     int ans = -1;
        
      mid = s + (e-s)/2;
     while (s <= e)
     {
         if (arr[mid] == key)
         {
             ans = mid;
             e =  mid - 1;
         }
         else if (arr[mid] > key) // left me jao
         {
             e = mid - 1;
         }
         else if (arr[mid] < key) // Right me jao
         {
             s = mid + 1;
         }  
         mid = s + (e-s)/2; 
     }
     return ans;
}
int lastOcc(int arr[],int size,int key){
        
     int s = 0;
     int e = size - 1;
     int mid = 0;
     int ans = -1;
        
      mid = s + (e-s)/2;
     while (s <= e)
     {
         if (arr[mid] == key)
         {
             ans = mid;
             s = mid + 1;
         }
         else if (arr[mid] > key)
         {
             e = mid - 1;
         }
         else if (arr[mid] < key)
         {
             s = mid + 1;
         }   
         mid = s + (e-s)/2; 
     }
           
     return ans;
}
int total_no_Occ(int arr[],int size,int key){

    return (lastOcc(arr,8,3) - firstOcc(arr,8,3)) + 1;
}
int main(){

    int arr[8] = {1,2,3,3,3,3,3,5};

    cout << "First Occerence of 3 Index " << firstOcc(arr,8,3);
    cout << "\nLast Occerence of 3 Index " << lastOcc(arr,8,3);
    cout << "\nTotal number of Occurence"<<total_no_Occ(arr,8,3);
    
    return 0;

}