#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == key){
            // cout<< mid;
           return mid;   
        }
         if(arr[mid] > key){
            end = mid - 1;
            }
          else{
            start = mid + 1;
           }
        mid = start + (end-start)/2;
    }
    return -1;
}
int getPivot(int arr[],int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[4] = {8,9,4,5};//2,4,5,6,8,9,1
    int pivot  = getPivot(arr,4);
    int key = 4; 
    if(key >= arr[pivot] && key <= arr[4-1]){
        //  BS on second line
        cout << binarySearch(arr,pivot,3,key);
    }
    else{
        //BS on first line
        cout << binarySearch(arr,0,pivot-1,key);
    }
}

