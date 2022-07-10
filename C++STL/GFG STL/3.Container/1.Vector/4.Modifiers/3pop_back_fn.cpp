//pop_back() – It is used to pop or remove elements from a vector from the back.
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};

    v.pop_back();

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }cout << endl;
    
    return 0;

}