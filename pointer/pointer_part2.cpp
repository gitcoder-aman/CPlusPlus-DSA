#include<iostream>
using namespace std;

// https://www.codingninjas.com/codestudio/guided-paths/pointers
int main(){

   /* int arr[5] = {10,20,30,40,50};

    cout << "address of first memory block is " << arr << endl;
    //or
    cout << "address of first memory block is " << &arr[0] << endl;

    cout << "value of first Index is " << arr[0] << endl;

    cout << "0th index of value is " << *arr << endl;

    cout << "0th + 1 index of value is " << *arr+1 << endl;

    cout << "1st index of value is " << *(arr+1) << endl;

    cout << "0th index of value is " << *arr+1 << endl;
    
    int i =3;

    cout <<  arr[i] << endl; // arr[i] = *(arr+i)
    // same work              
    cout <<  i[arr] << endl; // i[arr] = *(i+arr )
    cout << endl << endl;

    int temp[10] = {1,2};

    cout << sizeof(temp) << endl;
    
    cout << "1st "<< sizeof(*temp) << endl;
    cout << "2nd "<< sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) <<endl;
    cout << sizeof(*ptr) <<endl;
    cout << sizeof(&ptr) <<endl;*/

    // Address

    int a[20] = {1,2,3};
    // these are same work
    cout << "-> " << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;


    int *p = &a[0];

    // cout << p << endl;
    // cout << *p << endl;
    cout << "-> " << &p << endl;

// symbol table
    //cout << a++ << endl; // error

    cout << p++ << endl;

    return 0;

}