/*1. apply() :- This function applies the manipulation given in its arguments to all the valarray elements at once and returns a new valarray with manipulated values.

2. sum() :- This function returns the summation of all the elements of valarrays at once
*/
#include<iostream>
#include<valarray>  // for valarray functions
using namespace std;

int main(){

   // initializing valarray

    valarray<int> varr = {10,2,20,1,30};

    //Declaring new valarray
    valarray<int>varr1;

    //using apply() to increament all elements by 5

    varr1  = varr.apply([](int x){return x = x+5;});

    //Displaying new element value

    cout << "The new valarray with manipulated values is : ";
    for (int &x: varr1) cout << x << " ";
    cout << endl;
      
    // Displaying sum of both old and new valarray
    cout << "The sum of old valarray is : ";
    cout << varr.sum() << endl;
    cout << "The sum of new valarray is : ";
    cout << varr1.sum() << endl;
    return 0;

}