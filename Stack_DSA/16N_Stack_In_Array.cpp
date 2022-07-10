#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

//time complexity = O(1)
//Space Complexity = O(s+n)

class NStack{

    int *arr;
    int *top;
    int *next;

    int n,s;
    int freeSpot;

 public:
     //initialize your data structure, constructor
     NStack(int N, int S){

         n = N;
         s = S;

         arr = new int[s];
         top = new int[n];
         next = new int[s];

         //top initialize 
        //  for(int i = 0; i < n; i++){
        //      top[i] = -1;
        //  }
        memset(top,-1, n);
         //next initialize
         for (int i = 0; i < s; i++)
         {
             next[i] = i+1;
         }
         
         //update last index value to -1
         next[s-1] = -1;

         //initialize freeSpot
         freeSpot = 0;
     }
     //Pushws 'X' into the Mth stack,Return true if it gets pushed into the stack,and false otherwise.
     bool push(int x,int m){

         //check for overflow
         if(freeSpot == -1){
             return false;
         }
         //find index
         int index = freeSpot;
         
         //update freeSpot
         freeSpot = next[index]; 

         //insert element into array
         arr[index] = x;
         
         //update next
         next[index] = top[m-1];

         //update top
         top[m-1] = index;

         return true;
     }
     //pops top element from Mth Stack. Returns -1 if the stack is empty, otherewise returns the popped element.
     int pop(int m){

         //check underflow condition
         if(top[m-1] == -1){
             return -1;
         }
         int index = top[m-1];
         top[m-1] = next[index];
         next[index] = freeSpot;
         freeSpot = index;

         return arr[index];
     }
};
int main(){

    NStack obj(3,6);

    cout << obj.push(10,1) << endl;
    cout << obj.push(20,1) << endl;
    cout << obj.push(30,2) << endl;

    cout << obj.pop(1) << endl;
    cout << obj.pop(2) << endl;

    return 0;

}