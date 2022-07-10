#include<iostream>
using namespace std;

int mountain_element(int arr[],int size){

     int s = 0;
     int e = size - 1;
     int mid = s + (e-s)/2;

     while (s < e)  // time complexity = O(log n) 
     {
         if (arr[mid] < arr[mid + 1])
         {
             s = mid + 1;
         }
         else{
             e = mid;
         }
         mid = s + (e-s)/2;
     }
     return s;
     
}
int main(){

    int arr[10] = {24,69,100,99,79,78,67,36,26,19};
    cout << mountain_element(arr,10);
    return 0;

}