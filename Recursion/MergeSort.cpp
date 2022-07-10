#include<iostream>
using namespace std;
//https://www.geeksforgeeks.org/merge-sort/
// Time Complexity: O(nlogn) 
//Space Complexity = O(n)
void printOutput(int *arr,int s,int e){
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}
void merge(int *arr,int s,int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    //create temp array
    int *first = new int[len1];
    int *second = new int[len2];
 
    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
     mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    //merge 2 sorted Arrays
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
        // Copy the remaining elements of left[]
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
        // Copy the remaining elements of right[]
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;

}
void mergeSort(int *arr,int s,int e){

    //base case
    if(s >= e)
    return;
     
     int mid = s + (e-s)/2;
    //  printOutput(arr,s,mid);
    //left part sort karna h
    mergeSort(arr,s,mid);

    //right part sort karna h
   // cout << mid << e<<endl;
    //  printOutput(arr,mid+1,e);

    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}
int main(){

    int arr[10] = {2,5,1,6,9,7,4,2,8,3};
    int size = 10;

    mergeSort(arr,0,size-1);
    
    printOutput(arr,0,size);

    return 0;

}