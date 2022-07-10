#include<iostream>
using namespace std;

class Node{
        
        public:
        int data;
        Node* next;
        
        //Constructor
        Node(int data){
           
            this->data = data;
            this->next = NULL;
        }
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next == NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data "<< value << endl;
    }

};
void insertAtTail(Node* &tail,int d){
     //new node create

    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp; // or tail = tail->next
}
void insertAtHead(Node* &head,int d){
    
    //new node create

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
   
   //insert at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    //Inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node *nodeToinsert = new Node(d);

    nodeToinsert -> next =  temp->next;
    temp -> next = nodeToinsert;
    
}
void print(Node* &head){
    
    Node* temp = head;
    while(temp != NULL){
      cout << temp -> data << " ";
      temp = temp->next;
    }
    cout <<endl;
}
void deleteNode(int position,Node* &head,Node* tail) {

    //deleting first or start node
    if(position == 1){

        Node* temp = head;
        head = head->next;
        //memory free start node
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
          prev -> next = curr -> next;
          curr -> next = NULL;
          delete curr;
    
    //Inserting at last position
        if(prev->next == NULL){
         insertAtTail(tail,prev->data);
        return;
     }   
          
    }
}
int main(){
    
    //create a new node
    Node* node1 = new Node(10);

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
                      //insert at head
    // insertAtHead(head,12);
    // print(head);

    // insertAtHead(head,15);
    // print(head);
    
                      //insert at tail  
    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    //insert at position 
    insertAtPosition(tail,head,3,22);
    print(head);
    
    //inset at first position
    insertAtPosition(tail,head,1,9);
    print(head);
    
    //inset at last position
    insertAtPosition(tail,head,6,26);
    print(head);

    cout << "head " << head ->data << endl;
    cout << "tail " << tail ->data << endl; 
  
  //deletion 
    deleteNode(6,head,tail);
    print(head);
    deleteNode(1,head,tail);
    print(head);
    
    cout << "head " << head ->data << endl;
    cout << "tail " << tail ->data << endl; 
    return 0;

}