#include<iostream>
using namespace std;

//Time complexity = O(n);
//space complexity = O(n);
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
void print(Node* &head){

     Node* temp = head;

     while (temp != NULL)
     {
         cout << temp->data << " ";
         temp = temp->next;
     }
     cout << endl;
}
void reverse(Node* &head,Node* &curr,Node* &prev){
     
    //base case
    if(curr == NULL){
      head = prev;
      return;
    }
    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}
// It will return head of reverse list
Node* reverse1(Node* head) {

    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* chotaHead = reverse1(head->next);
    head -> next -> next = head;
    head -> next = NULL;
    return chotaHead;
}
Node* reverseLinkedList(Node* &head){

    return reverse1(head);
    // Node* curr = head;
    // Node* prev = NULL;
    // reverse(head,curr,prev);
     
    // return head;
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