#include<iostream>
using namespace std;

void duplicate(int arr[],int size){

   int ans = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j]){
               cout << arr[i] << " ";
            }
        }
    }
}
int main(){

     int arr[6] = {1,2,3,4,3,2};
     duplicate(arr,6);

    return 0;

}