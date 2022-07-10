#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

     v.push_back(1); 
     v.push_back(3); 
     v.push_back(6);  
     v.push_back(7);

     cout << "Finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl; // output type = Bool

     cout << "lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;   // iterator find

     cout << "upper bound-> "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;   // iterator find
     
     int a = 3;
     int b = 5;

     cout << "max -> " << max(a,b)<<endl;

     cout << "min -> "<< min(a,b)<<endl;
    
     // swap value
     swap(a,b);
     cout << "swaping"<<endl;
     cout <<endl << "a -> "<<a<<endl;
     cout <<endl << "b -> "<<b<<endl;
    
      //reverse string
     string abcd = "abcd";
     reverse(abcd.begin(),abcd.end());
     cout << "string_reverse-> "<<abcd<<endl;
    
     // rotate
     rotate(v.begin(),v.begin()+1,v.end());

     cout << "after rotate"<<endl;

     for(int i:v){
         cout <<i << " ";
     }cout <<endl;
     
     // sort based on introSort .its makes combination of three algorithm (quick_sort,heap_sort,insertion_sort) behind scence 
     //working
     sort(v.begin(),v.end());

     cout <<"after sort vector"<<endl;

     for(int i:v){
         cout <<i << " ";
     }cout <<endl;

    return 0;

}