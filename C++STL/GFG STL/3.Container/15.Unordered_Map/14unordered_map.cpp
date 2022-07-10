#include<iostream>
#include<unordered_map>
using namespace std;
//Time complexity = O(1)

void second_prg(){

    unordered_map<string,double> umap;

    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1,732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;

    //inserting value by insert function
    umap.insert(make_pair("e",2.718));

    string key = "PI";

    //if key not found in map iterator to end is returned

    if(umap.find(key) == umap.end())
    cout << key << " Not found"<< endl;

    //if key found then iterator to that key is returned
    else
    cout << "Found " << key << endl;  

    //iteratoring over all value of map
    unordered_map<string,double>::iterator itr;

    cout << "All Elemets " << endl;

    for(itr = umap.begin(); itr != umap.end(); itr++){

        cout << itr->first << " " << itr->second << endl;
    }

}
int main(){

    unordered_map<string,int>umap;

    //inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    //traversing an unordered map

    for(auto x:umap){
        cout << x.first << " " << x.second << endl;
    }
    cout << "Calling second function "<< endl;
    second_prg();
    return 0;

}