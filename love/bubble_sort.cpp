#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size){  // Time complexity O(n^2)
     int swapped = false;
     for (int i = 1; i < size; i++)
     {  // for round 1 to size-1
         for (int j = 0; j < size-i; j++)
         {
             //process element till n-1 th Index
             if(arr[j] > arr[j+1]){
                 swap(arr[j],arr[j+1]);
                 swapped = true;
             }
         } 
         if(swapped == false){    
             break;
         }
     }
     for (int i = 0; i < size; i++)
     {
         cout << arr[i] << " ";
     }
}
int main(){

    int arr[6] = {10,1,7,6,14,9};
    bubble_sort(arr,6);
    return 0;
}