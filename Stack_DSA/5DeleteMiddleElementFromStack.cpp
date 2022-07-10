#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int>&st,int count,int size){

   //base case
   if(count == size/2){
    st.pop();
    return;
   }

   int num = st.top();
   st.pop();
   //Recursive call
   deleteMiddle(st,count+1,size);

   st.push(num);

}
int main(){

    stack<int> st;

    st.push(21);
    st.push(22);
    st.push(23);  //delete the element
    st.push(24);
    st.push(25);
    st.push(26);

    int n = st.size();
    int count = 0;
    deleteMiddle(st,count,n);

    for (int i = 0; i < n; i++)
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;

}