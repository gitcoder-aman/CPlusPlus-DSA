/*front() – Returns a reference to the first element in the vector
*/

//Difference between front(),back() and begin(),end() functions
//-> begin() and end() function return an iterator(like a pointer) initialized to the first or the last element of the container 
// that can be used to iterate through the collection, while front() and back() function just return a reference to the first or the last element of the container.
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {3,4,1,7,2};

    cout << v.front() << endl;
    
    cout << v.back() << endl;
    return 0;

}