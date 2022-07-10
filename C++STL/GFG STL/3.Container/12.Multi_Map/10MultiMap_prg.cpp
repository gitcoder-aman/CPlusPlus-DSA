//Multimap is similar to a map with the addition that multiple elements can have the same keys.
// Also, it is NOT required that the key-value and mapped value pair have to be unique in this case. 
//One important thing to note about multimap is that multimap keeps all the keys in sorted order always.

#include<iostream>
#include<map>
using namespace std;

int main(){

    multimap<int ,int>m1;

    ///insert elements in random order
        m1.insert(pair<int,int>(2,30));
        m1.insert(pair<int,int>(3,60));
        m1.insert(pair<int,int>(4,20));
        m1.insert(pair<int,int>(2,50));

    //printing map m

    map<int,int>:: iterator itr;

    cout << "The map m is :" << endl;
    cout << "KEY  ELEMENT "<< endl;

    for(itr = m1.begin();itr != m1.end(); ++itr){
        cout << itr->first << "\t" << itr->second<< endl;
    }cout << endl;
    return 0;

}