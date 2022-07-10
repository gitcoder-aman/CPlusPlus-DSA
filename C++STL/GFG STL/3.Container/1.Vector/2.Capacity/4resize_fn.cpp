/*
resize(n) – Resizes the container so that it contains ‘n’ elements.
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
  
  //1. size of the vector container is lowered.
  cout << "Size of the vector container is lowerd "<<endl;
    vector<int>v = {1,2,3,4,5};

    cout << "Contents of vector before resizing :" << endl;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    //vector  is resized
    v.resize(4);

    cout << "Contents of vector after resizing: " << endl;
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << endl;
    // }
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }cout << endl;

    //2. Size of the vector container is increased.
    cout << "Size of the vector container is increased :" << endl;
    v.resize(8);
     for (auto it = v.begin(); it!= v.end(); it++)
    {
        cout << *it << " ";
    }cout << endl;
    
    //3.Size of the vector container is increased and new elements are initialized with specified value.
    cout << "Size of the vector container is increased and new elements are initialized with specified value "<<endl;
    v.resize(12,9);

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }cout << endl;
    return 0;

}