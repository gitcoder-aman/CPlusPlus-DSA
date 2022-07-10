// Priority queue is the greatest of all elements in the queue and elements are in nonincreasing order 
#include<iostream>
#include<queue>
using namespace std;

void showpq(priority_queue<int> pq){

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }cout << endl;
    
}
int main(){

    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);
 
    cout << "The priority queue pq is : ";
    showpq(pq);
 
    cout << "\nPeiority_Queue.size() : " << pq.size();
    cout << "\nPeiority_Queue.top() : " << pq.top();
 
    cout << "\nPeiority_Queue.pop() : ";
    pq.pop();
    showpq(pq);
    return 0;

}