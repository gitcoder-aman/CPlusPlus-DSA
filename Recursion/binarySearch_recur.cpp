#include<iostream>
using namespace std;
//Time complexity = O(log n)
//Space Complexity = O(log n)
void print(int *arr,int s,int e){
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}
int binarySearch(int *arr,int start,int end,int key){

    cout << endl;
    print(arr,start,end);
    //base case
    //element not found
    if(start > end)
    return false;

    int mid = start + (end - start)/2;
    //element found
    if(arr[mid] == key)
    return true;

    
    if(arr[mid] < key){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }

}
int main(){

    int arr[6] = {2,4,6,10,14,16}; // array must be sorted
    int key = 10;
   cout << "Present or Not "<<binarySearch(arr,0,5,key)<<endl;
    
    return 0;

}