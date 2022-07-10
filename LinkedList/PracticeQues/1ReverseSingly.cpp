#include<iostream>
using namespace std;

//Time complexity = O(n);
//space complexity = O(1);
class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){

       this->data = data;
       this->next = NULL;
    }
};
void insertAtTail(Node* &tail,Node* &head,int d){
    
    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{

        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}
void print(Node* &last_Node){

     Node* temp = last_Node;

     while (temp != NULL)
     {
         cout << temp->data << " ";
         temp = temp->next;
     }
     cout << endl;
}
Node* reverseLinkedList(Node* &head){
     if(head == NULL || head->next == NULL){
           return head;
     }
     
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    
    return prev;
}
int main(){
 

    Node* head = NULL;
    Node* tail = NULL;

    int n;
    int data;
    cout << "Enter number of linked list "<< endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> data;
        insertAtTail(tail,head,data);
    }

    Node* last_Node = reverseLinkedList(head);
    print(last_Node);
    
    return 0;

}