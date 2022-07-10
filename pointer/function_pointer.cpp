#include<iostream>
using namespace std;

void print(int *p){

    cout << p << endl; // address
    cout << *p << endl; // value

}
void update(int *p){
    // p = p + 1;

    // cout << "inside "<<p << endl;
    
    *p = *p + 1; // value update
}
int getSum(int *arr,int n){ // *arr or arr[] that same because pointer passing

    cout <<endl << "size: " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main(){

    int value = 5;
    int *p = &value;

    print(p);

    cout << "Before "<< *p << endl;
    update(p);
    cout << "After "<< *p << endl;


    int arr[5] = {1,2,3,4,5};

    cout << "sum is " << getSum(arr+3,2) << endl; // passing of array of pointer
    return 0;

}