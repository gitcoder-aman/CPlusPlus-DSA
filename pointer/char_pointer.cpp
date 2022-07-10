#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl; // print address of 0th position

    cout << ch << endl; // print entire content

    char *c = &ch[0];

    // print entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
    return 0;

}