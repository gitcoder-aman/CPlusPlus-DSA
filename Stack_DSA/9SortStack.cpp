#include<iostream>
#include<stack>
using namespace std;

//Time complexity = O(n^2)
void sortedInsert(stack<int>&s,int num){

    //base case
    if(s.empty() || (!s.empty() && s.top() < num)) {
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();
    sortedInsert(s,num);
    s.push(n);
}
void SortStack(stack<int>&s){

    //base case
    if(s.empty()){
        return;
    }
    int num =  s.top();
    s.pop();

    //recursive call
    SortStack(s);

    sortedInsert(s,num);
}
int main(){

    stack<int>s;

    s.push(3);
    s.push(-7);
    s.push(9);
    s.push(-2);
    s.push(5);

    SortStack(s);
    int n = s.size();
    
    cout <<"After reversing of stack "<< endl;
    for(int i =0 ; i < n ; i++){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;

}