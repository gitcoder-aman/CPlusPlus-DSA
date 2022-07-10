//doubly linked-list
#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int>l;
              //Time complexity= O(1)

    l.push_back(5);
    l.push_front(7);

    for(int i:l){
        cout <<i << " ";
    }cout <<endl;

     // list<int>n(l);                 // copy in 'last' vector through 'a' vector
     list<int>n(5,100);//size = 5, inislization = 100;

    for(int i:n){
        cout << i<<" ";
    }cout <<endl;

    l.erase(l.begin());

    cout << "After erase"<<endl;
    for(int i:l){
        cout <<i << " ";
    }cout<<endl;

    cout <<"size of list "<<l.size()<<endl;
    return 0;

}