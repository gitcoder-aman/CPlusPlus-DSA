/*
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);

    //print all the elements

    cout << "The vector elements in reverse order are :" << endl;

    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;

}
