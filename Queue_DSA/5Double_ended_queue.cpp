#include<iostream>
#include<queue>
using namespace std;

class Deque{

    int* arr;
    int front;
    int rear;
    int size;

public:
    Deque(int n){
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    bool pushFront(int x){

        //check full or not
        if(isFull()) {
            return false;
        }
        else if(isEmpty()){ //one element push
            front = rear = 0;
        }
        else if(front == 0 && rear != size - 1){ // maintain cyclic nature
            front = size - 1;
        }
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }
    bool pushRear(int x){
        //check full or not
        if(isFull()) {
            return false;
        }
        else if(isEmpty()){ //one element push
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){ // maintain cyclic nature
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = x;
        return true;
    }
    int popFront() {
        
        if(isEmpty()){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1){
            front = 0; //to maintain cyclic nature
        }
        else{
            //normal flow
            front++;
        }
        return ans;
    }
     int popRear() {
        
        if(isEmpty()){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(rear == 0){
            rear = size - 1; //to maintain cyclic nature
        }
        else{
            //normal flow
            rear--;
        }
        return ans;
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty(){
        if(front == -1)
        return true;
        else
        return false;
    }
    bool isFull() {
        if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1))) {
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){

    Deque obj(5);

    // cout << obj.isEmpty() << endl;
    cout << obj.pushFront(10) <<"1"<< endl;
    cout << obj.pushFront(20)<<"2"<< endl;
    cout << obj.pushRear(30)<<"3" <<endl;
    cout << obj.pushRear(40)<<"4" <<endl;



    cout << "Get Front = "<< obj.getFront() << endl;
    cout << "Pop Rear = " << obj.popRear() << endl;
    cout << "Pop Front =" <<obj.popFront() << endl;
    cout << "Get Front =" <<obj.getFront() << endl;
    cout << "Get Rear = " << obj.getRear() << endl;

    return 0;

}