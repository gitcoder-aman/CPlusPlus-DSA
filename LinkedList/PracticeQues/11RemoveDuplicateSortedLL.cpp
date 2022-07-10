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
void insertAtTail(Node* &tail,Node* &head,int d){
    //when first node is created
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
     //new node create

    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp; // or tail = tail->next
    }
}

void print(Node* &head){
    
    Node* temp = head;
    while(temp != NULL){
      cout << temp -> data << " ";
      temp = temp->next;
    }
    cout <<endl;
}
//Time Complexity = O(n);
//space complexity = O(1)
Node* uniqueSortedList(Node* &head){

    //empty List
    if(head == NULL)
    return NULL;

    //non empty List
    Node* curr = head;
    while (curr->next != NULL)
    {
        if((curr -> data == curr -> next -> data) && (curr -> next != NULL )){
             
             Node* next_next = curr -> next -> next;
             Node* nodetoDelete = curr -> next;
             delete(nodetoDelete);
             curr -> next = next_next;
        }
        else{ // not equal
            curr = curr -> next;
        }
    }
    return head;
}
int main(){
    
    //head pointed to node1
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    
                      //insert at tail  with sorted order
    insertAtTail(tail,head,1);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,3);
    insertAtTail(tail,head,3);
    insertAtTail(tail,head,4);
    insertAtTail(tail,head,4);
    insertAtTail(tail,head,5);
    
    print(head);
    
    cout << "After duplicate value removed----- " << endl;
    Node* h = uniqueSortedList(head);
    print(h);

    cout << "head " << head ->data << endl;
    cout << "tail " << tail ->data << endl; 
    return 0;

}