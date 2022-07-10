//Queue (Line)-> First in first out
#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Aman");
    q.push("Kumar");
    q.push("Gupta");
    
    cout << "Size of before pop "<<q.size()<<endl;

    cout << "First Element "<<q.front()<<endl;
    
    cout << "After Pop"<<endl;
    q.pop();

    cout<<"First Element "<<q.front()<<endl;

    cout << "Size of After pop "<<q.size()<<endl;
    
    return 0;

}