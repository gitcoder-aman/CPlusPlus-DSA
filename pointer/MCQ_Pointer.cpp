#include<iostream>
using namespace std;

int main(){

    /*int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;*/
    
    /*int *p = 0;
    int first = 110;
    *p = first; // degmentation fault  (p = &first)
    cout << *p << endl;*/

    // int *ptr;
    // cout << sizeof(ptr);

   /* int arr[] = {11,21,31,41};
    //int *ptr = arr++; //No update symbol table
    cout << *ptr << endl;*/

   /* int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;*/

    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;
    
    return 0;

}