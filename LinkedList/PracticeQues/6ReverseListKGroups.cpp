#include<iostream>
using namespace std;

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
//Time complexity = O(n)
//Space complexity = O(n)
Node* kReverse(Node* &head,int k) {

    //if base call
    if(head == NULL){
        return head;
    }
    //step 1: reverse first k Nodes
    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    //step 2: Recursion dekh lega aage ka
    if(head != NULL){
        head -> next = kReverse(forward,k);
    }
    //step 3: return head of reversed list
    // cout << prev->data << " ";
    return prev; 
}
void print(Node* head){

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int main(){
 

    Node* head = NULL;
    Node* tail = NULL;

    int n,k;
    int data;
    cout << "Enter number of linked list "<< endl;
    cin >> n;
    cout << "No of Group of linked list "<< endl;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> data;
        insertAtTail(tail,head,data);
    }
      Node* rev_head = kReverse(head,k);

      print(rev_head);
  
    return 0;

}