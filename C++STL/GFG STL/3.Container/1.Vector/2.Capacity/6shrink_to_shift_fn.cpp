/*
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(10);

    for (int i = 0; i < 10; i++)
    {
        v[i] = i;
    }

     // Initial vector
    cout << "Vector size initially: " << v.size();
  
    cout << "\nVector elements are: ";
    for (int i = 0; i < 10; i++)
        cout << v[i] << " ";
      cout << endl;

    v.resize(5);

    cout << "Vector elements after resize(5) are: "<< v.size() << endl;
    
    cout << "Vector elements after resize(5) are " << endl;
    for (int i = 0; i < 10; i++)
        cout << v[i] << " ";
    

    //shrink to the size
    // till which elements are
    //destroys the elements after 5

    v.shrink_to_fit();

    cout << "Vector size after shrink_to_fit() "<< v.size() << endl;

    cout << "Vector elements after shrink_to_fit are " << endl;
    for (int i = 0; i < 10; i++)
        cout << v[i] << " ";
        cout << endl;

        for(auto it = v.begin(); it != v.end(); it++){
            cout << *it << " ";
        }cout << endl;
    return 0;

}