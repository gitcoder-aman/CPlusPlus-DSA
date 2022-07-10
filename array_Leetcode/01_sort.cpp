#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}
void sortOne(int arr[],int size){

    // for (int left = 0; left< size ; left++)
    // {
    //     for (int right = size; right > left ; right--)
    //     {
    //         if(arr[left] == 1 && arr[right] == 0){
                
    //             swap(arr[left],arr[right]);
    //         }
    //     }
        
    // }

    int left = 0, right = size-1;
    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        //agar yha pohoch gye ho, iska matlab
        //arr[left] == 1 and arr[right] == 0
        if(left < right){
          
           swap(arr[left],arr[right]);
           left++;
           right--;
        }
    }
    
}
int main(){

    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    printArray(arr,8);
    return 0;

}