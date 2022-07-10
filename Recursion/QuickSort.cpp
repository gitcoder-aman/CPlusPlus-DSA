#include<iostream>
using namespace std;
//https://www.geeksforgeeks.org/quick-sort/
//https://ide.geeksforgeeks.org/FmFGd4hWmp
//SPACE COMPLEXITY = O(n)
//TIME COMPLEXITY = O(nlogn)
//worst case = O(n^2) // n = size of array
int partition(int *arr,int s,int e){

    int pivot = arr[s];

    int cnt = 0;
    for (int i = s+1; i <= e; i++)
    {
        if(pivot >= arr[i]){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);
     
     //left and right wala part smbhal lete hai
     int i = s, j = e;

     while (i < pivotIndex && j > pivotIndex)
     {
         while (arr[i] <= pivot)
         {
             i++;
         }
         while (arr[j] >= pivot)
         {
             j--;
         }
         
         if(i < pivotIndex && j > pivotIndex){
             swap(arr[i++],arr[j--]);
         }
     }
     return pivotIndex;
    
}
void quickSort(int *arr,int s,int e){

    //base case
    if(s >= e)
    return;

    //partition karenge
    int p = partition(arr,s,e);

    //left part sort karo
    quickSort(arr,s,p-1);

    //right part sort karo
    quickSort(arr,p+1,e);

}
int main(){

    // int arr[7] = {2,6,1,4,9,0,9};
    // int arr[] = {4,2,5,1,3};
    int arr[6] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
    return 0;

}