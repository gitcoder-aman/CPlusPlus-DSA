/*
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;

    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }
    cout << "Output of begin and end " << endl;
    
    for (auto i = v.begin(); i < v.end(); ++i)
    {
        cout << *i << endl;
    }
    
    
    return 0;

}