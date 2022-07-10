// vetor-> dynamic size increse
#include<iostream>
#include<vector>
using namespace std;

int main(){
 
     vector<int>v;

     vector<int>a(5,1); //5-vecotr size and 1- insilizing by 1, all block
    
     cout <<"Print a"<<endl;
     for(int i:a){
         cout <<i<<" ";
     }cout <<endl;
    
     vector<int>last(a); // copy in 'last' vector through 'a' vector

      cout <<"Print last"<<endl;
     for(int i:last){
         cout <<i<<" ";
     }cout <<endl;

     cout <<"capacity->"<<v.capacity()<<endl; //capicity = memory assign

     v.push_back(1);  //elemet push
     cout <<"capacity->"<<v.capacity()<<endl;

     v.push_back(2);
     cout <<"capacity->"<<v.capacity()<<endl;

     v.push_back(3);
     cout <<"capacity->"<<v.capacity()<<endl;
     cout <<"size->"<<v.size()<<endl;       //size = how many have element in this vector 

    cout <<"Element at 2nd Index "<<v.at(2)<<endl;

    cout <<"Front "<<v.front()<<endl;
    cout <<"back "<<v.back()<<endl;
       
    cout <<"before pop"<<endl;
    for(int i:v){
        cout << i << " ";
    }cout <<endl;

    v.pop_back();

    cout <<"After pop"<<endl;
    for(int i:v){
        cout <<i<<" ";
    }
     
     cout << "before clear size "<<v.size()<<endl;
     v.clear();
     cout << "After clear size "<<v.size()<<endl;

    return 0;

}