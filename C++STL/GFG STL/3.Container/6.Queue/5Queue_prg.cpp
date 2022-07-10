#include<iostream>
#include<queue>
using namespace std;

void showQueue(queue<int>q){

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }cout << endl;
    
}
int main(){

    queue<int> q;
    q.push(13);
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "The queue is : "<< endl;
    showQueue(q);

    cout << "Queue Size() "<< q.size() << endl;
    cout << "Queue front() "<< q.front() << endl;
    cout << "Queue back() "<< q.back() << endl; 

    cout << "Queue pop() " << endl;
    q.pop();
    showQueue(q);
    return 0;

}