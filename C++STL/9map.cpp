#include<iostream>
#include<map>
using namespace std;

int main(){
 
     // Time complexity = O(log n)

    map<int,string> m;
     
     m[1] = "Aman";
     m[13] = "Kumar";
     m[2] = "Gupta";

     m.insert( {5,"bheem"});
     cout << "before erase"<<endl;
     
     // first = key // second = value
     for(auto i:m){
         cout << i.first<<" " <<i.second<<endl;
     }

     cout << "Finding -13-> "<<m.count(-13)<<endl; 
     
     m.erase(13);  // given key
     cout << "After erase"<<endl;

     for(auto i:m){
         cout << i.first<<" "<<i.second<<endl;
     }cout <<endl;

     auto it = m.find(1);

     for(auto i = it;i != m.end();i++){ //iterator show
         cout <<(*i).first<<endl;
     }


    return 0;

}