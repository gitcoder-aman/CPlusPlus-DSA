#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insertNode(Node* &head,int d){

    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
        newNode->next = newNode;
    }
    else{
         Node* curr = head;
         while (curr->next != head)
         {
             curr = curr->next;
         }
         
         Node* newNode = new Node(d);
         curr->next = newNode;
         newNode->next = head;
    }
}
void print(Node* &tail){
    
    if(tail == NULL){
        cout << "Linked List is empty "<< endl;
        return;
    }
    Node* temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp -> next;
    } while (tail != temp);
    cout << endl;
}
//gives length of linked list
int getLength(Node* tail){

   if(tail == NULL){
       cout << "List is empty "<< endl;
       return 0;
   }
    int len = 1;
    Node* temp = tail;
    temp = temp->next;
    while (temp != tail)
    {
        len++;
        temp = temp -> next;
    } 
    return len;
}
void ListHalf(Node* &head,Node* &head1,Node* &head2){
  
    int count = getLength(head);
    int half = count/2;
    int i = 1;
    Node* curr = head; 
    head1 = head;//head1 is my first head of circular linked list
    while (i < half)
    {  
           curr = curr->next;
           i++;
            if(i==half){
                head2 = curr->next;  //second head is my second head of circular loop
                curr->next = head;
            }

            if(head2 != NULL){
                Node* temp = head2;
                while (temp->next != head)
                {
                    temp = temp->next;
                }
                temp->next = head2;
            }
    }
}
int main(){

    Node* head = NULL;
    Node* head1 = NULL;
    Node* head2 = NULL;


    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    insertNode(head,7);
    insertNode(head,8);
    insertNode(head,9);
    insertNode(head,10);
    insertNode(head,11);

    print(head);
    ListHalf(head,head1,head2);
    cout << "First half circular Linked List " << endl;
    print(head1);
    cout << "Second half circular Linked List " << endl;
    print(head2);

    return 0;

}