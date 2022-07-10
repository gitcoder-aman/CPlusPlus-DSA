#include<iostream>
#include<valarray>
using namespace std;

int main(){

    // Initializing valarray
    valarray<int> varr = { 10, 2, 20, 1, 30 };
      
    // Displaying largest element of valarray
    cout << "The largest element of valarray is : ";
    cout << varr.max() << endl;
      
    // Displaying smallest element of valarray
    cout << "The smallest element of valarray is : ";
    cout << varr.min() << endl;
  
    return 0;

}