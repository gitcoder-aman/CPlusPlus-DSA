/*at(g) – Returns a reference to the element at position ‘g’ in the vector
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    
    cout << v.at(4);
    return 0;

}