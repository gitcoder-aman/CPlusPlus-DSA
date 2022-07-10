/*
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.
*/

#include<iostream>
#include<map>
using namespace std;
//time compelexity = O(logn)
int main(){

    map<int ,int>m1;

    ///insert elements in random order
    //ans unique key stored
    m1.insert(pair<int,int>(2,30));
    m1.insert(pair<int,int>(3,60));
    m1.insert(pair<int,int>(4,20));
    m1.insert(pair<int,int>(1,50));
    m1.insert(pair<int,int>(5,40));
    m1.insert(pair<int,int>(6,50));
    m1.insert(pair<int,int>(7,10));
    //but store sorted order
    //printing map m


    cout << "The map m is :" << endl;
    cout << "KEY  ELEMENT "<< endl;

    // for(auto itr = m1.begin();itr != m1.end(); ++itr){
    //     cout << itr->first << "\t" << itr->second<< endl;
    // }cout << endl;
    //or
    for(auto itr : m1){
        cout << itr.first << " " << itr.second << endl;
    }
   
    map<int,int>:: iterator itr;
    
    map<int,int>m2(m1.begin(),m1.end());

    cout << "The map m2 after"<<"assign from m1 is: "<< endl;

    cout << "KEY\tELEMENT"<< endl;
    for( itr = m2.begin();itr != m2.end(); ++itr){
        cout << itr->first << "\t" << itr->second<< endl;
    }cout << endl;

    //remove all element up to 
    //element with key = 3 in m2

    cout << "m2 after removal of element less than key = 3:"<< endl;

    cout << "KEY\tELEMENT"<< endl;
    m2.erase(m2.begin(),m2.find(3));

    for( itr = m2.begin(); itr != m2.end(); ++itr){
        cout << itr->first << "\t" << itr-> second<< endl;
    }cout << endl;
    
    //remove all elements with key = 4

    int num;
    num = m2.erase(4);
    cout << "m2.erase(4) "<<endl;
    cout << num << " removed "<< endl;
    cout << "KEY\tELEMENT"<< endl;

    for( itr = m2.begin(); itr != m2.end(); ++itr){
        cout << itr->first << "\t" << itr-> second<< endl;
    }cout << endl;

    //lower bound and upper bound for map m1 key = 5;
    cout << "m1.lower_bound(5) "<<"\tKEY = ";

    cout<< m1.lower_bound(5)->first << '\t';
    cout<< "\tELEMENT = " << m1.lower_bound(5)->second << endl;

    cout << "m1.upper_bound(5):"<< "\tKEY = ";
    cout << m1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << m1.upper_bound(5)->second << endl;
    return 0;
}