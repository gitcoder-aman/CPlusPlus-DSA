#include<iostream>
#include<stack>
using namespace std;

stack<int> reveseStack(stack<int>&s,int start,int end,int top,int k){
     while(top != 0){
        if(start <= end && top > start)
        swap(s[start++],s[end--]);
        else{
            end = top-1;
            start = top-k;
            reverseStack(s,start,end,top-1,k);
        }
        top--;
    }
    return top;
}
stack<int> reverseTheGroups(stack<int> &s, int n, int k) {
    int top = n;
    int start = n-k;
    int end = n;
    
    stack<int> s = reverseStack(s,start,end,top,k);
    return s;
}

int main(){

    stack<int>s{1,2,3,4,5};
    return 0;

}
