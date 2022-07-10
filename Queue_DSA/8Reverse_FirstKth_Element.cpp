#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int>revQueue(queue<int>q,int k){

    stack<int>s;

    //step 1: pop first kth element from Queue and put into stack
   for (int i = 0; i < k; i++)
   {
       int val = q.front();
       q.pop();
       s.push(val);
   }

   //step 2: fetch from stack put into Queue
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    //step 3: first (n-k) element from Queue and push back (n = q.size())
    int t = q.size() - k;
    while(t--){
       int val = q.front();
       q.pop();
       q.push(val);
    }
   return q;
}
int main(){

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
 
    int k = 3;
    queue<int>ans = revQueue(q,k);

    while (!ans.empty())
    {
        cout << ans.front() << " ";
        ans.pop();
    }
    
    return 0;
}