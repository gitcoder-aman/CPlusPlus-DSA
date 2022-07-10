#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}
  void sort012(int a[], int arr_size)
 {
    int left = 0;   //i
    int right = arr_size - 1;  //j
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= right) {
        switch (a[mid]) {
 
        // If the element is 0
        case 0:
            swap(a[left], a[mid]);
            left++;
            mid++;
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[right]);
            right--;
            break;
        }
    }
}

int main(){

    int arr[8] = {0,2,2,1,0,1,0,2};

    sort012(arr,8);
    printArray(arr,8);
    return 0;

}