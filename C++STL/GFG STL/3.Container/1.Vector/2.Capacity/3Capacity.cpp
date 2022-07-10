/*
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;

    //insert elements
    for(int i = 0; i < 10; i++){
        v.push_back(i*10);
    }

    cout << "The size of vector is " << v.size()<< endl;
    cout << "The maximum capacity of vector "<< v.capacity() << endl;
    return 0;

}