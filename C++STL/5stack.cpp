//stack -> Last in first Out
#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;
    s.push("Aman");
    s.push("Kumar");
    s.push("Gupta");  
    
    cout <<"size of stack="<<s.size()<<endl;
     
    cout <<"Top Element->"<<s.top()<<endl;
    
    cout<<"After Pop string"<<endl;
    s.pop(); // Gupta Pop
    cout <<"Top Element->"<<s.top()<<endl;

    cout <<"size of stack="<<s.size()<<endl;

    cout <<"Empty or not="<<s.empty()<<endl; //0->false , 1 - True

    return 0;

}