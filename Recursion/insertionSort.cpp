#include<iostream>
using namespace std;

void PrintOutput(int *arr,int size){
    
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}
void print(int *arr,int size){
    cout << endl;
    cout << arr[0] << " " << size;
}
void insertionSort(int *arr,int size){
     print(arr,size);
    PrintOutput(arr,size);

    //base case
    if(size == 0 || size == 1)
    return;

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && (arr[j] > temp))
        {
            arr[j+1]  = arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
    insertionSort(arr + 1,size - 1);
}

int main(){

    int arr[6] = {5,6,4,1,3,2};
    insertionSort(arr,6); 

    PrintOutput(arr,6);
    
    return 0;

}