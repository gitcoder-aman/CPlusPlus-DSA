//Deque manages its elements with a dynamic array, provides random access, and has almost the same interface as a vector.
#include<iostream>
#include<deque>
using namespace std;

void showDeque(deque<int>d){

    deque<int>::iterator it;

    for (it = d.begin(); it != d.end(); ++it)
    {
        cout << *it << " ";
    }cout << endl;
    
}
int main(){

    deque<int>d1;

    d1.push_back(10);
    d1.push_front(20);
    d1.push_back(30);
    d1.push_front(15);

    cout << "The deque is " << endl;
    showDeque(d1);
    
    cout << "Deque Size = " << d1.size() <<endl;
    cout << "Deque max_size = "<< d1.max_size()<<endl;
    cout << "Deque at(2) = "<< d1.at(2)<<endl;
    cout << "Deque front() = "<< d1.front()<<endl;
    cout << "Deque back() = "<< d1.back()<<endl; 

    cout << "Deque pop_fornt() "<< endl;
    d1.pop_front();
    showDeque(d1);

    cout<< "Deque pop_back() " << endl;
    d1.pop_back();
    showDeque(d1);
    return 0;

}