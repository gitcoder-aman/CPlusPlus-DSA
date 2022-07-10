#include<iostream>
using namespace std;

int main(){

    int arr[]  = {1,3,5,5,5,5,67,123,125};

    int size = sizeof(arr)/4;
    int x = 5;

    int first = -1;
    int last = -1;
    for (int i = 0; i < size; i++)
    {

        if(arr[i] == x){
           
           if(first == -1)
           first = i;

           last = i;
        }
    }
    cout << "First Occ = "<< first << endl;
    cout << "Last Occ = "<< last << endl;
    
    return 0;

}