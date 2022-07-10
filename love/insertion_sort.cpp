#include<iostream>
using namespace std;

void insertionSort(int n, int arr[]){
    for(int i = 1 ; i < n ; i++){
        int temp = arr[i];
        int j = i-1;
    //   for(; j >= 0; j-- ){
    //       if(arr[j] > temp){
    //           //shift
    //           arr[j+1] = arr[j];
    //       }
    //       else{
    //           break;
    //       }
    while (j >= 0 && (arr[j] > temp))
    {
        // if(arr[j] > temp){
              //shift
              arr[j+1] = arr[j];
              j--;
         // }
        //   else{
        //       break;
        //   }
    }
        arr[j+1] = temp;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
}
int main(){

     int arr[6] = {5,6,4,1,3,2};
    insertionSort(6,arr);   
    return 0;
}