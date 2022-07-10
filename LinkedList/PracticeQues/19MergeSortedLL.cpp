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
void print(Node* &head){
    
    Node* temp = head;
    while(temp != NULL){
      cout << temp -> data << " ";
      temp = temp->next;
    }
    cout <<endl;
}
//Time complexity = O(nlogn)
//sapce complexity = O(logn)
// i am say this logic name totrise and here approach
Node* findMid(Node* head){ 
    Node* slow = head;
    Node* fast = head->next;
    
    while (fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
Node* merge(Node* left, Node* right){

    if(left == NULL)
    return right;

    if(right == NULL)
      return left;

      Node* ans = new Node(-1); // dummy node create
      Node* temp = ans;

      //merge 2 Sorted Linked list
      while (left != NULL && right != NULL)
      {
          if(left->data < right->data){
              temp -> next = left;
              temp = left;
              left = left->next;
          }
          else{
              temp -> next = right;
              temp  = right;
              right = right->next;
          }
      }
      while (left != NULL)
      {
           temp -> next = left;
           temp = left;
           left = left->next;
      }
      while (right != NULL)
      {
          temp -> next = right;
          temp  = right;
          right = right->next;
      }
      ans = ans -> next;
      return ans;
}
Node* mergeSort(Node* head){
    //base case
    if(head == NULL || head -> next ==  NULL){
        return head;
    }
    //breaking linked list into 2 halves, after finding mid
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid -> next = NULL;
    
    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    
    //merge both left and right halves
    Node* result = merge(left,right);
   
    return result;
}
int main(){
    
   //create a new node
   Node* tail = NULL;
   Node* head = NULL;

                      //insert at tail  
    insertAtTail(tail,head,5);
    insertAtTail(tail,head,3);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,1);
    insertAtTail(tail,head,4);
    
   Node* h = mergeSort(head);
   print(h);

    return 0;

}