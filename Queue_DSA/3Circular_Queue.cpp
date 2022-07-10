#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{

     int* arr;
     int front;
     int rear;
     int size;

public:
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }
    bool enqueue(int value){
        if((front == 0 && rear == size-1) || (rear ==(front-1)%(size-1))){
            cout << "Queue is Full = ";
            return false;
        }
        else if(front == -1){ //first element to push
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear = 0; //top maintain cyclic nature
        }
        else{  //normal flow
              rear++;
        }
         //push inside the queue
    arr[rear] = value;
    return true;
    }
   int dequeue(){
       //for empty queue
       if(front == -1){
           cout << "Queue is empty =";
           return -1;
       }
       int ans = arr[front];
       arr[front] = -1;
       if(front == rear){ //single element is present
          front = rear = -1;
       }
       else if(front == size - 1){
           front = 0; //top maintain cyclic nature
       }
       else{ //normal flow
            front++;
       }
       return ans;
   }
};
int main(){

    CircularQueue obj(3);
    cout << obj.enqueue(2) << endl;
    cout << obj.enqueue(3) << endl;
    cout << obj.dequeue()<<endl;
    cout << obj.enqueue(4) << endl;
    cout << obj.enqueue(6) << endl;
    cout << obj.enqueue(7) << endl;
    cout << obj.dequeue()<<endl;
    return 0;

}