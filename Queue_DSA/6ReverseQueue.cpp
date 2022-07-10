#include<iostream>
#include<queue>
#include<stack>
using namespace std;


// Expected Time Complexity : O(n)
// Expected Auxilliary Space : O(n)
/*queue<int> rev(queue<int>q){

    stack<int>s;

    while (!q.empty())      //element get out from queue and pushes in stack
    {                     
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while (!s.empty())  // elment get out from stack and pushes in queue
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    return q;
}*/
//through recursion without using stack
queue<int>rev(queue<int>q){
     
     //base case
     if(q.empty()){
         return q;
     }

     int tempValue = q.front();
     q.pop();
     queue<int>result = rev(q);
     result.push(tempValue);
     return result;
}
int main(){

    queue<int>q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

    queue<int>ans = rev(q);

    while(!ans.empty()){
		cout<<" "<<ans.front();
		ans.pop();
	}
    
    return 0;

}