#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    
    int n = sizeof(arr)/4;
    int z = 3;
    for(int i = 0; i < n; i++){
        if(arr[i] == z){
            for(int j = i; j<n-1; j++){
                arr[j] = arr[j+1];
            }
            n--;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;

}