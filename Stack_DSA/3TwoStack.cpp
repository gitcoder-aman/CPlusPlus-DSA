#include<iostream>
using namespace std;

class TwoStack {

      int *arr;
      int top1;
      int top2;
      int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        //at least a  empty space present
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
        else{
            cout << "Stack Overflow "<< endl;
        }
    }

    // Push in stack 2.
    void push2(int num) {
         if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout << "Stack Overflow "<< endl;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size) {
            int ans = arr[top1];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
        int peek() {  //time complexity =  O(1)

        if((top1 >=0 && top1 < size) && (top2 >=0 && top2 < size)){
            cout << arr[top1] << endl;
            return arr[top2];
        }
        else{
            cout << "Stack is Empty "<< endl;
            return -1;
        }
    }
};
int main(){

    TwoStack st(10);

    st.push1(10);
    st.push2(20);
    st.push1(30);
    st.push2(40);
    st.push1(50);
    st.push2(60);
    st.push1(70);
    st.push2(80);
    st.push1(90);
    st.push2(100);
    
    cout << st.peek() << endl;

    st.pop1();
    cout << st.peek() << endl;

    st.pop2();
    cout << st.peek() << endl;


    
    return 0;

}