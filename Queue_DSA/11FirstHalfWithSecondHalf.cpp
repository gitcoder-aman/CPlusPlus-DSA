#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//Time Complexity = O(n)
//Space Complexity = O(n)

void interLeaveQueue(queue<int>&q){

    //to check the even number of elements
    if(q.size() % 2 != 0)
    cout << "Input even number of integers " << endl;

    stack<int>s;
    int halfSize = q.size()/2;

    //push first half elements into the stack
    //queue: 16 17 18 19 20, stack: 15,14,13,12,11

    for(int i = 0; i < halfSize; i++){
        int val = q.front();
        s.push(val);
        q.pop();
    }
    //enqueue back the stack elements
    //queue: 16,17,18,19,20,15,14,13,12,11
    while (!s.empty())
    {
        int val = s.top();
        q.push(val);
        s.pop();
    }
    //dequeue the first half elements of queue
    // and enqueue them back
    //queue : 15,14,13,12,11,16,17,18,19,20

    for (int i = 0; i < halfSize; i++)
    {
        int val = q.front();
        q.push(val);
        q.pop();
    }
    //Again push the first half elements into the stack
    //queue: 16,17,18,19,20 , Stack:11,12,13,14,15

    for (int i = 0; i < halfSize; i++)
    {
        int val = q.front();
        s.push(val);
        q.pop();
    }
    //interleave the elements of queue and stack
    while (!s.empty())
    {
        int val = s.top();
        q.push(val);
        s.pop();
        val = q.front();
        q.push(val);
        q.pop();
    }

}
int main(){

    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);

    interLeaveQueue(q);
    int len = q.size();
    for (int i = 0; i < len; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;

}