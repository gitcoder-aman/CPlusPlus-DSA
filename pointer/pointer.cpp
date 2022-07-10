#include<iostream>
using namespace std;

//https://www.codingninjas.com/codestudio/guided-paths/pointers
int main(){

    // int num = 5;

    // cout << num << endl;

    // // address of Operator - &

    // cout << "adress of num is " << &num << endl;

    // int *ptr = &num;
    // double d = 4.3;
    // double *p2 = &d;

    // cout << "address of pointer is " << ptr <<endl;
    // cout << "pointer of num is " << *ptr <<endl; // derefrences
    // cout << "size of integer is " << sizeof(num) <<endl;
    // cout << "size of pointer is " << sizeof(ptr) <<endl;

    // cout << "size of double is " << sizeof(d) <<endl;
    // cout << "size of pointer is " << sizeof(p2) <<endl;
    

    // // pointer to int is created, and pointing to some garbage address
    // //int *p; //bad practice
    // int *p = 0;
    // cout << *p << endl;

    //Null pointer and value access
    int n = 5;
    int a = n;
    cout << "before "<< n << endl; // 5
    a++;
    cout << "after "<< n << endl; // 5      not acess value

    int *p = &n;
    cout << "before "<< n <<endl;//5
    (*p)++;
    cout << "After "<< n << endl;//6      access value

    //copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // address increament
    cout << "before address of q " << q << endl;
    q++;
    cout << "after address of q " << q << endl;

    return 0;

}