#include<iostream>
#include<vector>
using namespace std;
//time complexity = O(n^2)
// 1. vectorname.erase(position)
// 2. vectorname.erase(startingposition, endingposition)
int main(){

    cout << "first function " << endl;

    vector<int> v = {1,2,3,4,5};
    vector<int> :: iterator it;
    
    it = v.begin()+2;

    v.erase(it);

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }cout << endl;
    
    cout << "Second Function "<< endl;

    vector<int>myvector = {1,2,3,4,5};
    vector<int>::iterator it1,it2;

    it1 = myvector.begin();
    it2 = myvector.end();
    it2--;
    it2--;
    

    myvector.erase(it1,it2);

    for (auto it = myvector.begin(); it != myvector.end(); ++it)
    {
        cout << *it << " ";
    }cout << endl;
    return 0;

}