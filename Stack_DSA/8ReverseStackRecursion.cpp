#include<iostream>
#include<stack>
using namespace std;

//Time complexity = O(n^2)
//-> key of understanding in recursion 
void insertAtBottom(stack<int>&s,int element){
    
    //base case
    if(s.empty()){
        // cout << "trueI " << endl;
        s.push(element);
        // cout << "Go back rev"<<endl;
        return;
    }
    int num = s.top();
    s.pop();
    
    //  cout << "I.size = " << s.size() << endl;
    //  cout << "num=" << num <<  endl;
    //  cout << "element=" << element << endl;
    insertAtBottom(s,element);
    // cout << "Pushing="<<num << endl;
    s.push(num);
}
void reverseStack(stack<int>&s){
    
    //base case
    if(s.empty()){
        // cout << "trueR" << endl;
        return;
    }
    int num = s.top();
    // cout << "num=" <<num <<endl;
    s.pop();

    //recursive call
     reverseStack(s);
    //  cout << "rev" << endl;
    //  cout << "R.size = " <<s.size() <<endl;
    //  cout << "element =" <<num<< endl;
     insertAtBottom(s,num);
}
int main(){

    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);
    int n = s.size();
    
    cout <<"After reversing of stack "<< endl;
    for(int i =0 ; i < n ; i++){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}