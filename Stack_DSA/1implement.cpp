//https://en.cppreference.com/w/cpp/container/stack
#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creation of stack
    stack<int>s;

    //push operation
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(5);
    // s.emplace(6);

    //pop
    s.pop();

    cout << "Printing top element " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty "<< endl;
    }
    else{
        cout << "Stack is not empty "<< endl;
    }
    cout << "Size of stack " << s.size() << endl;
    return 0;

}