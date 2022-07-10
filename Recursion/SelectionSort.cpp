#include<iostream>
using namespace std;

void print(int *arr,int size,int i){
    cout << endl << arr[i] << " " << size << " " << i;
}
void selectionSort(int *arr,int size,int i){
    
    print(arr,size,i);
    //base case
     if(size == 0 || size == 1)
    return;
    
    int minIndex = i;
    for(int j = i+1; j < size; j++){

       if(arr[minIndex] > arr[j])
       minIndex  = j;

    }
     swap(arr[minIndex],arr[i]);
     selectionSort(arr,size-1,i+1);

}
int main(){

     int arr[5] = {2,5,1,6,9};
     int i = 0;
    selectionSort(arr,5,i);

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;

}