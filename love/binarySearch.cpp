#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size-1;
 
    // int mid = (start + end)/2;
   int mid = start + (end - start)/2;
    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        // go to right wala part
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{ // key < arr[mid]
            end = mid - 1;
        }
    
     mid = start + (end - start)/2;
       
    }
    return -1;
    // time complexity = O(log n)
}
int main(){

    int even[8] = {4,6,9,12,19,21,34,40};
    int odd[5] ={2,6,7,9,11};
     
     int even_key = 21;
     int odd_key = 11;
  int evenIndex = binarySearch(even,8,even_key);
  cout << "Index of 21 is "<< evenIndex << endl;
  
  int oddIndex = binarySearch(odd,5,odd_key);
  cout << "Index of 11 is "<< oddIndex << endl;

    return 0;

}