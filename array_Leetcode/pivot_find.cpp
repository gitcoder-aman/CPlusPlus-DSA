#include<iostream>
using namespace std;

int pivot(int arr[],int size){

    int s = 0;
    int e = size - 1;
    int mid =  s + (e-s)/2;

    while (s < e)
    {
        if(arr[mid] >= arr[0])
        s = mid + 1;
        else
        e = mid;

        mid = s + (e-s)/2;
    }
    return s; // return e; because e and s same index
}
int main(){

    int arr[5] = {8,10,17,1,3}; // elements are sorted array like trading graph
    cout << pivot(arr,5);
    return 0;
        // 1,7,3,6,5,6
        // 8,10,17,1,3
}