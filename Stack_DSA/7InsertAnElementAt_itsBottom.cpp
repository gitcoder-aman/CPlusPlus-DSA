#include<iostream>
#include<stack>
using namespace std;

void insertElement(stack<int>&s,int element){
 
    //base condition
    if(s.empty()){
       s.push(element); 
       return;
    }
    int num = s.top();
    s.pop();
    
    //Recursive Call
    insertElement(s,element);
    
    s.push(num);
}
int main(){

    stack<int>s;

    s.push(21);
    s.push(22);
    s.push(23);   
    s.push(24);
    s.push(25);

    int element = 50;
    insertElement(s,element);
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}