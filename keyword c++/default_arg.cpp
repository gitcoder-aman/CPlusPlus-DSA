//default argument
//https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118785/offering/1381146
#include<iostream>
using namespace std;

void print(int arr[],int n = 3,int start = 0){ // here, start is the default argument
    // default argument should be right to left most. 
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
}
int main(){

    int arr[5] = {1,4,7,8,9};
    
    int size = 5;
    print(arr); // here, start = 0 and n = 3 will automatically be taken as 0
    cout << endl;
    print(arr,size,2);

    return 0;

}