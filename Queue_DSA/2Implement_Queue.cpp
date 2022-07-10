#include<iostream>
#include<queue>
using namespace std;

class Queue{

    int * arr;
    int rear;
    int qfront;
    int size;

public:
    //create a constructor

    Queue() {
        //implement the Constructor
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    bool isEmpty(){ 

        if(qfront == rear) {
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int data) {

        if(rear == size){
            cout << "Queue is Full " << endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue() {

        if(qfront == rear) {
            return -1;
        }
        else{
            //😏
            int ans = arr[qfront];

            arr[qfront] = -1;
            qfront++;

            if(qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int front() {

        if(qfront == rear) {
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
int main(){

    Queue obj;

   cout << "dequeue element = " << obj.dequeue() << endl;
   obj.enqueue(10);
   obj.enqueue(17);
   obj.enqueue(23);
   obj.enqueue(11);
   
   cout << "dequeue element = " << obj.dequeue() << endl;

   cout << "front of Queue = " << obj.front() << endl;

   cout << "what empty Queue = " << obj.isEmpty() << endl;
    return 0;

}