#include<iostream>
#include<map>
using namespace std;

int main(){

    //1. inbuilt implementation
    //2. Time complexity
    //3. valid keys datatype

    map<int,string>m;
    
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";  // just assign the value at this position 
    
    auto it = m.find(3); //O(log(n))
    for(auto itr : m){
        cout << itr.first << " " << itr.second << endl;
    }
    map<string,string>m1;
    m1["abcd"] = "abcd"; // s.size() * log(n)
   // m1.erase("abcd"); // O(log(n))
    
    for(auto itr : m1){
        cout << itr.first << " " << itr.second << endl;
    }
    return 0;

}