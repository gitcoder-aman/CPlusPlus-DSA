//push_back() – It push the elements into a vector from the back
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};

    v.push_back(6); // time complexity = O(1)

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }cout << endl;
    
    return 0;

}
