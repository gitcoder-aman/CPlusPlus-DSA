#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
        
        public:
        int data;
        Node* next;
        Node* random;
        
        //Constructor
        Node(int data){
           
            this->data = data;
            this->next = NULL;
            this->random = NULL;
        }
};
void insertAtTail(Node* &tail,Node* &head,int d){

       //when list is empty
    if(tail == NULL){

        Node* newNode = new Node(d);
        tail = newNode;
        head = newNode;
    }
     //new node create
  else{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp; // or tail = tail->next
  }
}
void randomLink(Node* &head){
    
    Node* start = head;
    head -> random = head->next->next;
    head = head->next->next;
   // cout << head ->data << endl;

    head -> random = head->next->next;
   // cout << head ->random->data << endl;
    head = start;
}
void print(Node* &head){
    
    Node* temp = head;
    while(temp != NULL){
      cout << temp -> data << " ";
      temp = temp->next;
    }
    cout <<endl;
}
//Approach 1
//Time Complexity = O(n);
//Space Complexity = O(n); //using map
Node* copyList(Node* head){

   //step 1:
   //create a clone list
   Node* cloneHead = NULL;
   Node* cloneTail = NULL;

   Node* temp  = head;
   while (temp!=NULL)
   {
       insertAtTail(cloneTail,cloneHead,temp->data);
       temp = temp -> next;
   }
   //step 2: create a map
   unordered_map<Node*, Node*>oldToNewNode;
   
   Node* originalNode = head;
   Node* cloneNode = cloneHead;
   while (originalNode != NULL)
   {
       oldToNewNode[originalNode] = cloneNode;
       originalNode  = originalNode -> next;
       cloneNode = cloneNode -> next;
   }
   originalNode = head;
   cloneNode  = cloneHead;

   while (originalNode != NULL)
   {
       cloneNode -> random = oldToNewNode[originalNode -> random];
       originalNode = originalNode -> next;
       cloneNode = cloneNode -> next;
   }
   return cloneHead;
}
//Approach 2
//Time complexity = O(n)
//space complexity= O(1)
Node* copyList2(Node* head){

    // step 1: create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    Node* temp  = head;
    while (temp  != NULL)
    {
        insertAtTail(cloneTail,cloneHead,temp->data);
        temp = temp -> next;
    }
    //step2 : cloneNodes add in between Original list
    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        Node* next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

       next = cloneNode->next;
       cloneNode->next = originalNode;
       cloneNode = next;
    }
    //step3 : random pointer copy
     temp = head;
    while (temp != NULL)
    {
        // cout << temp->data << endl;
        if(temp->next != NULL){

        // temp ->next ->random = temp->random ? temp->random->next : temp->random;
            if(temp -> random != NULL){
             temp->next->random  = temp->random->next;
            }
            else{
                temp -> next->random = temp ->random;
            }
        } 
        temp = temp -> next -> next;
    }
    //step4 : revert changes done in step 2
     originalNode = head;
     cloneNode = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;

        if(originalNode != NULL){
            cloneNode -> next = originalNode -> next;
        }
        cloneNode = cloneNode -> next;
    }
    //step5 : return ans;
    return cloneHead;
}
int main(){
    
   //create a new node
   Node* tail = NULL;
   Node* head = NULL;

                      //insert at tail  
    insertAtTail(tail,head,1);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,3);
    insertAtTail(tail,head,4);
    insertAtTail(tail,head,5);
 
    randomLink(head);  //Link with random Nodes
    print(head);
    
    cout << "after clone Linked list in given LL" << endl;
    //Node* h = copyList(head);     // create a clone LL
    Node* h  = copyList2(head);
    print(h);

    // cout << head -> random->data << endl;
    // cout << head -> random->random->data << endl;
    
    return 0;

}