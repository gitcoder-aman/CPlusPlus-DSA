#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insertNode(Node* &head,int d){

    if(head == NULL){
       
       Node* newNode = new Node(d);
       head = newNode;
    }
    else{
        Node* newNode = new Node(d);
        newNode->next = head;
        head = newNode;
    }
}
void print(Node* &head){

    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
//Ist Approach
//Time complexity = O(n);
//space complexity = O(1);
Node* SortList(Node* &head){
  
   int zeroCount = 0;
   int oneCount = 0;
   int twoCount = 0;

   Node* temp = head;

   while (temp != NULL)
   {
       if(temp->data == 0)
       zeroCount++;
       else if(temp->data == 1)
       oneCount++;
       else if(temp->data == 2)
       twoCount++;

       temp = temp->next;
   }
   temp = head;
   while (temp != NULL)
   {
       if(zeroCount != 0){
           temp->data = 0;
           zeroCount--;
       }
       else if(oneCount != 0){
           temp->data = 1;
           oneCount--;
       }
       else if(twoCount != 0){
           temp->data = 2;
           twoCount--;
       }
       temp = temp->next;
   }
   return head;
}
//2nd Approach
void insertAtTail(Node* &tail,Node* curr){
    tail->next = curr;
    tail = curr;
}
//time complexity = O(n)
//space complexity = O(1)
Node* sortLL(Node* &head){

    Node* zeroHead = new Node(-1); //create dummy nodes
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    
    //create separate list 0s,1s,2s
    while (curr != NULL)
    {
        int value = curr->data;
        if(value == 0){
            insertAtTail(zeroTail,curr);
        }
        else if(value == 1){
            insertAtTail(oneTail,curr);
        }
        else if(value == 2){
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }
    //merge 3 sublist
    //1st list not empty
   if(oneHead -> next != NULL){
       
       zeroTail -> next = oneHead -> next;
   }
   else{
       //1st list empty
       zeroTail -> next = twoHead -> next;
   }
   oneTail -> next = twoHead -> next;
   twoTail -> next = NULL;
   
   //setup head
   head = zeroHead -> next;

   //delete dummy Nodes
   delete zeroHead;
   delete oneHead;
   delete twoHead;
   return head;
}
int main(){

    Node* head = NULL;
    insertNode(head,1);
    insertNode(head,0);
    insertNode(head,2);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,1);
    insertNode(head,0);


    print(head);

    cout << "Aftere Sort 0's,1's,2's,"<< endl;
   // Node* sort_head = SortList(head);
    Node* sort_head = sortLL(head);
    print(sort_head);

    return 0;

}