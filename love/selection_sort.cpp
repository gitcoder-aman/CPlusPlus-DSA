#include<iostream>
using namespace std;

void selection_sort(int arr[],int size){

    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;           // space complexity = O(1)
        for (int j = i+1; j < size; j++)  // time complexity = O(n^2)
        {
            if(arr[minIndex] > arr[j]){  // use case = arr/size small then use
               minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}
int main(){

    int arr[5] = {64,25,12,22,11}; 
    selection_sort(arr,5);
    return 0;

}