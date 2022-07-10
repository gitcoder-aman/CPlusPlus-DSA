#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if( this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free for Node with data " << val << endl;
    }
};
void print(Node* head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp -> next;
    } cout << endl;
}
//gives length of linked list
int getLength(Node* head){

      int len = 0;
      Node* temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp -> next;
    } 
    return len;
}
void insertAtHead(Node* &head,Node* &tail,int d){
    
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
            Node* temp = new Node(d);

            temp->next = head;
            head->prev = temp;
            head = temp;
    }
}
void insertAtTail(Node* &tail,Node* &head,int d) {
    
    //empty case
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
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    //insert at start
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }
    else{
        Node* temp = head;
        int cnt = 1;
        
        while (cnt < position-1)
        {
            temp = temp->next;
            cnt++;
        }
        //inserting at last postion
        if(temp -> next == NULL){
            insertAtTail(tail,head,d);
            return;
        }
        //creating a node for d

        Node* nodeToinsert = new Node(d);
        nodeToinsert->next = temp->next;
        temp->next->prev = nodeToinsert;
        temp->next = nodeToinsert;
        nodeToinsert->prev = temp;

    }
}
void deleteNode(int position,Node* &head,Node* &tail) {

    //deleting first or start node
    if(position == 1){

        Node* temp = head;
        temp -> next ->prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

    }
    else{
          //deleting any middle node or last node
          Node* curr = head;
          Node* prev = NULL;

          int cnt = 1;
          while (cnt < position)
          { 
              prev = curr;
              curr = curr->next;
              cnt++;
          }
         curr->prev = NULL;
         prev->next = curr->next;
         curr->next = NULL;
         delete curr;
    
   // Inserting at last position
        if(prev->next == NULL){
         insertAtTail(tail,head,prev->data);
        return;
     }   
          
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
int main(){

   // Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    
     print(head);

     
    cout << "Insert at Head "<< endl;
    insertAtHead(head,tail,11);
    print(head);

    insertAtHead(head,tail,12);
    print(head);

    insertAtHead(head,tail,13);
    print(head);
    
    cout << "insert at tail "<< endl;
    insertAtTail(tail,head,25);
    print(head);

    cout << "insert at position "<<endl;
    insertAtPosition(tail,head,2,100);
    print(head);

    cout << "Delete head node " << endl;
    deleteNode(1,head,tail);
    print(head);
    
    cout << "Delete Middle Node "<< endl;
    deleteNode(4,head,tail);
    print(head);

    cout << "Length of Linked List= "<<getLength(head) << endl;
    cout << "Head "<< head->data<<endl;
    cout << "tail "<< tail->data<<endl;

    return 0;

}