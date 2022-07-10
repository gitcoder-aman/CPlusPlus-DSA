/*data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v = {10,20,30,40,50};

    //memory pointer pointing to the first element

    int * pos = v.data();

    //prints the vector

    for (int i = 0; i < v.size(); i++)
    {
        cout << *pos++ << " ";
    }cout << endl;
    
    return 0;

}