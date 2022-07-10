#include<iostream>
using namespace std;

int xorunique(int arr[],int size){

       int ans = 0;
    //XOR ing all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    //XOR [1,n-1]
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
    
}
int main(){

      int arr[6]={5,1,2,3,4,2};
      cout << xorunique(arr,6);
    return 0;

}