//order set -> Insert or Delete (Not modified) ,(duplicate not insert number only once time come in set), comes sorted order, 
//this is slow as compresion to unorder set
//unorder set->it is fast, Not sorted Order
#include<iostream>
#include<set>
using namespace std;

int main(){
     // insert,erase,count,find-> time complexity = O(log n) in use BST  
     // begin,end,size,empty -> O(1)

    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);  
    s.insert(0);
    s.insert(2);
    //duplicate
    s.insert(0);
    s.insert(6);
    s.insert(5);
    
 
   for(auto i : s){ // sorted order
       cout << i << endl;
   }cout << endl;
   
  // s.erase(s.begin());
   
   set<int>::iterator it = s.begin();
   it++; // 2
   s.erase(it);

   for(auto i : s){ 
       cout << i << endl;
   }cout << endl;
     
     //count
   cout <<"5 is present or not->"<< s.count(5)<<endl; // type of output= bool
    
    //find
    
    set<int>::iterator itr = s.find(5);

  //  cout << "value present at itr->" <<*it<<endl;
    
    for (auto it = itr; it != s.end(); it++)
    {
        cout <<*it<<" ";
    }cout << endl;
    
    
    
    
    return 0;

}