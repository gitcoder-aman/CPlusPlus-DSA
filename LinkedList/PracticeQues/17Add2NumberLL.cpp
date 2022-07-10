#include<iostream>
#include<vector>
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
Node* reverse(Node* head){

    Node* curr = head;
    Node* prev = NULL;
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
/*Node* add(Node* first, Node* second){

    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;

        Node* temp = new Node(digit);

       //create node and add in answer Linked List
        insertAtTail(ansTail,ansHead,digit);
        carry = sum/10;
        first = first -> next;
        second = second -> next;
    }
    while (first != NULL)
    {
        int sum = carry + first -> data;
        int digit = sum %10;
        //create node and add in answer Linked List
        insertAtTail(ansTail,ansHead,digit);
        carry = sum/10;
        first = first -> next;

    }
     while (second != NULL)
    {
        int sum = carry + second -> data;
        int digit = sum %10;
        //create node and add in answer Linked List
        insertAtTail(ansTail,ansHead,digit);
        carry = sum/10;
        second = second -> next;
    }
    while(carry != 0){
        int sum = carry;
        int digit = sum %10;
        //create node and add in answer Linked List
        insertAtTail(ansTail,ansHead,digit);
        carry = sum/10;
    }
    
    return ansHead;
}*/
//generic code
Node* add(Node* first, Node* second){

    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    
    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if(first != NULL)
        val1 = first -> data;

        int val2 = 0;
        if(second != NULL)
        val2 = second -> data;

        int sum = carry + val1 + val2;
        int digit = sum%10;
        
        //create node and add in answer Linked List
        insertAtTail(ansTail,ansHead,digit);

        carry = sum/10;
        if(first != NULL)
        first = first -> next;
        
        if(second != NULL)
        second = second -> next;
    }
    return ansHead;
}
int main(){
    
   //create a new node
   Node* tail1 = NULL;
   Node* head1 = NULL;
   Node* tail2 = NULL;
   Node* head2 = NULL;
                      //insert at tail  
    insertAtTail(tail1,head1,1);
    insertAtTail(tail1,head1,2);
    insertAtTail(tail1,head1,3);

    insertAtTail(tail2,head2,1);
    insertAtTail(tail2,head2,2);
    insertAtTail(tail2,head2,3);

    //steop 1 - reverse input LL
    Node* first = reverse(head1); //time compelxity = O(m)
    Node* second = reverse(head2); //time compelxity = O(n)

    Node* ans = add(first,second); //time compelxity = O(max(m,n))
    ans = reverse(ans); //time compelxity = O(m+n)

    print(ans);
    
    return 0;

}