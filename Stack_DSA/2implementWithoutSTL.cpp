#include<iostream>
#include<stack>
using namespace std;

class Stack{

    //properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){  //time complexity =  O(1)

        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack is Overflow "<< endl;
        }
    }
    void pop() {    //time complexity =  O(1)
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow "<< endl;
        }
    }
    int peek() {  //time complexity =  O(1)

        if(top >=0 && top < size){
            return arr[top];
        }
        else{
            cout << "Stack is Empty "<< endl;
            return -1;
        }
    }
    bool isEmpty(){   //time complexity =  O(1)

        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){

    Stack st(5);
    
                    st.push(22);
                    st.push(43);
                    st.push(44);
                    st.push(19);
                    st.push(43);

    cout << st.peek() << endl; // 43
    st.pop();
   
    cout << st.peek() << endl;  //19
    st.pop();
    
    cout << st.peek() << endl; //44
    st.pop();

    cout << st.peek() << endl; //43
    st.pop();
    
    cout << st.peek() << endl; //22   ,  and then all element are poped in the stack
    st.pop();

    if(st.isEmpty()) {
        cout << "Stack is Empty " << endl;
    }
    else{
        cout << "Stack is not Empty "<< endl;
    }
    return 0;
}