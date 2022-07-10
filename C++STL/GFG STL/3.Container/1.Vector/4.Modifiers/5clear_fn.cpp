//erase() – It is used to remove elements from a container from the specified position or range
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);
 
    // Vector becomes 1, 2, 3, 4, 5
 
    myvector.clear();  // time complexity = O(n)
    // vector becomes empty
 
    // Printing the vector
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << *it << " "; cout << endl;
    return 0;

}