//Stacks are a type of container adaptors with LIFO(Last In First Out) type of working

#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;
    s.push(21);
    s.push(22);
    s.push(24);
    s.push(13);
     
    //      s.pop();
    // s.pop();
 
    while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
    }
    return 0;

}