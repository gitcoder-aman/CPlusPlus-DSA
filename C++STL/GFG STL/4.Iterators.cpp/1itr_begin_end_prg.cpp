#include<iostream>
#include<vector>
#include<iterator> // for iterators
using namespace std;

int main(){

    vector<int>arr = {1,2,3,4,5};

     //Declaring iterator to a vector
   // vector <int> :: iterator it; //write auto in for loop so no need to declare vector iterator

    //Displaying vector elements using begin() and end()

    cout << "The Vector elements are :" << endl;
    for(auto it = arr.begin();it != arr.end(); it++){
        cout << *it << " ";
    }cout << endl;
    return 0;

}