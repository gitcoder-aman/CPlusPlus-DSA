/*
reserve() – Requests that the vector capacity be at least enough to contain n elements.
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//Time complexity = O(n)
int main(){

    vector<int>v = {1,2,3,4,5};

    cout << "After reverse of vector " << endl;
    
    for(int i =0; i < v.size(); i++){
        cout << v[i] <<endl;
    }
    reverse(v.begin(),v.end());

    cout << "After reverse of vector " << endl;

     for(int i =0; i < v.size(); i++){
        cout << v[i] <<endl;
    }
    return 0;

}