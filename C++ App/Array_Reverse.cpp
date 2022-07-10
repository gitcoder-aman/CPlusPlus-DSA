#include<iostream>
using namespace std;
int main(){

    int size;
     int temp;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}