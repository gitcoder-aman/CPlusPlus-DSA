#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

//3. advance() :- This function is used to increment the iterator position till the specified number mentioned in its arguments.
int main(){

    vector<int>arr = {10,20,30,40,50};

    //Declaring iterator to a vector

    vector<int >::iterator it = arr.begin();

    //using advance() to increment iterator position point to 4

    advance(it,3);

    //Displaying iterator position
    cout << "The Position of iterator after advancing is : "<< endl;
    cout << *it <<endl;
    return 0;

}