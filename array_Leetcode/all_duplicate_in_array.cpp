#include<iostream>
using namespace std;

void duplicate(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
        
            if((arr[i]^arr[j]) == 0){
               cout << arr[i]<<" ";
               break;
            }
        }
        
    }
    
}
int main(){

     int arr[8] = {4,3,2,7,8,2,3,1};    // each number are present twice or once // print onces time present in array
    duplicate(arr,8);
    return 0;

}