#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set <string>stringSet;

    stringSet.insert("code");
    stringSet.insert("in");
    stringSet.insert("c++");
    stringSet.insert("is");
    stringSet.insert("fast");

    string key = "c++";
    
    // find returns end iterator if key is not found,
    //else it returns iterator to that key

    if(stringSet.find(key) == stringSet.end())
    cout << key << " Not Found " << endl << endl;
    else
    cout << "Found " << key << endl << endl;

    cout << "All Elements : "<< endl;
    unordered_set<string> :: iterator itr;
    
    for(itr = stringSet.begin(); itr != stringSet.end(); itr++){

        cout << *itr << endl;
    }
    return 0;

}