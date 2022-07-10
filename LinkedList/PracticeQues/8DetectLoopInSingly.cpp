#include<map>
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
//Time Complexity = O(n)
//Space Complexity = O(1)
bool detectLoop(Node* head){

    if(head == NULL)
    return false;
    map<Node*,bool> visited;

    Node* temp = head;
    while (temp != NULL)
    {
        if(visited[temp] == true){
            cout << "Present on element " << temp -> data << endl;
        return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}
//Time Complexity = O(n)
//Space Complexity = O(1)

Node* floydDetectLoop(Node* head){
    if(head == NULL)
    return NULL;

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow == fast){
            cout << "Present at slow " << slow ->data << endl;
            return slow;
        }
    }
    return NULL; 
}
int main(){
    
    //create a new node
    Node* node1 = new Node(10);

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
                         //insert at head
    insertAtHead(head,12);

    insertAtHead(head,15);
    
                      //insert at tail  
    insertAtTail(tail,12);

    insertAtTail(tail,17);

    //insert at position 
    insertAtPosition(tail,head,3,22);
    
    //inset at first position
    insertAtPosition(tail,head,1,9);
    
    //inset at last position
    insertAtPosition(tail,head,6,26);

    print(head);
    tail -> next = head -> next;  //create loop in Singly Linked List

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

   if(floydDetectLoop(head) != NULL){
       cout << "Cycle is present " << endl;
   }
   else{
       cout << "No Cycle " << endl;
   }
    return 0;

}