#include<iostream>
using namespace std;

bool isPossible(int arr[],int k,int mid,int size){

    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 0; i < size; i++)
    {
        if((arr[i] - lastPos) >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
    
}
int aggressive_cow(int arr[],int k,int size){

   // int maxi = -1;
    // for (int i = 0; i < size; i++)
    // {
    //     maxi = max(arr[i],maxi);
    // }
    int start = 0;
    int end = arr[size-1];
    int ans = -1;
    int mid =  start + (end - start)/2;
    while (start <= end)
    {
        if(isPossible(arr,k,mid,size)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid =  start + (end - start)/2;
    }
    return ans;
}
int main(){

    int arr[5] = {1,2,3,4,6}; // array should be sorted
    int k = 2;  //  ‘K’ denoting the number of elements in the array/list and the number of aggressive cows.
    cout << aggressive_cow(arr,k,5); // 5 is arr of size
    return 0;

}