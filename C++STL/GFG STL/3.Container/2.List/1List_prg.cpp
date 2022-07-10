//List manages its elements as a doubly linked list and does not provide random access.
#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showList(list <int> l){
 
       list<int>::iterator it;

       for (it = l.begin(); it != l.end(); ++it)
       {
           cout << *it << " ";
       }cout << endl; 
}
int main(){

    list<int> l1,l2;

    for(int i = 0; i < 10; i++){

        l1.push_back(i*2);
        l2.push_front(i*3);
    }

    cout << "List 1 is " << endl;
    
 showList(l1);cout << endl;

    cout << "List 2 is " << endl;
    
 showList(l2);cout << endl;
    
    cout << "l1.front() : "<< l1.front();cout << endl;
    cout << "l2.front() : "<< l2.front();cout << endl;
  
    cout << "list 1 pop_front() "<< endl;
    l1.pop_front();
    showList(l1);cout << endl;

    cout << "list 2 pop_back() " << endl;
    l2.pop_back();
    showList(l2);cout << endl;

    cout << "List 1 Reverse "<< endl;
    l1.reverse();
    showList(l1);cout << endl;

    cout << "List 2 Sort " << endl;
    l2.sort();
    showList(l2);cout << endl;

    return 0;

}