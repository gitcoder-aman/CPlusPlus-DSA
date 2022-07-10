/*assign() – It assigns new value to the vector elements by replacing old ones
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    
    v.assign(7,100);

    cout << "Size " << v.size() << endl;

    cout << "Elemenet are : "<< endl;

    for (auto it = v.begin(); it !=  v.end(); ++it)
    {
        cout << *it << " ";
    }cout << endl;
    
    
    // modify the elements
    v.assign(v.begin(), v.begin() + 3);
 
    
    cout << "\nModified VectorElements are\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
        cout << endl;

    return 0;

}