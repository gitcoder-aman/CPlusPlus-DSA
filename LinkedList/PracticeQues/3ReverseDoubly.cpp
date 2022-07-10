#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node*  next;

    //constructor
    Node(int data){
        
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAtTail(Node* &tail,Node* &head,int d){

   if(tail == NULL){
       Node* temp = new Node(d);
       tail = temp;
       head = temp;
   }
   else{

       Node* temp = new Node(d);
       tail -> next = temp;
       temp -> prev = tail;
       tail = temp;
   }
}
Node* reverseLinkedList(Node* &head){

     Node* curr = head;
      if(curr == NULL || curr->next == NULL){
           return head;
      }
     Node* temp = NULL;
     
      /* swap next and prev for all nodes of
         doubly linked list */
     while (curr != NULL)
     {
         temp = curr -> prev;
         curr -> prev = curr -> next;
         curr -> next = temp;
         curr = curr -> prev;
     }
     
      if(temp != NULL)
      head = temp -> prev;

      return head;
}
void print(Node* head){

    Node* node = head;
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }cout << endl;
    
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    // int n;
    // int data;
    // cout << "Enter number of linked list "<< endl;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> data;
    //     insertAtTail(tail,head,data);
    // }
    insertAtTail(tail,head,10);
    insertAtTail(tail,head,8);
    insertAtTail(tail,head,4);
    insertAtTail(tail,head,2);
    Node* last_node = reverseLinkedList(head);
    print(last_node);

    return 0;

}