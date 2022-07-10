#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
     ~Node() {
            if (next != NULL) {
                delete next;
            }
     }
};
void insertNode(Node* &head,int d){

    if(head == NULL){
       
       Node* newNode = new Node(d);
       head = newNode;
    }
    else{
        Node* newNode = new Node(d);
        newNode->next = head;
        head = newNode;
    }
}
void print(Node* &head){

    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
Node* solve(Node* &first, Node* &second){

    // if only one element is present in first List
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }
    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2 -> next;
    while (next1 != NULL && curr2 != NULL )
    {
        if( (curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data)){
           
           curr1 -> next = curr2;
           next2 = curr2 -> next;
           curr2 -> next = next1;

           curr1 = curr2;
           curr2 = next2;
        }
        else{
            // go one step ahead in first list
            curr1 = curr1 -> next;
            next1 = next1 -> next;

            if(next1 == NULL){
                curr1 -> next =curr2;
                return first;
            }
        }
    }
    return first;
}
Node* mergeSortLL(Node* first,Node* second){

    if(first == NULL)
    return second;
    if(second == NULL)
    return first;

    if(first -> data <= second ->data ){
        return solve(first,second);
    }
    else{
        return solve(second,first);
    }
}
int main(){

    Node* head1 = NULL;
    Node* head2 = NULL;

    //first Linked List
    insertNode(head1,5);
    insertNode(head1,3);
    insertNode(head1,1);
 
    //2nd Linked List
    insertNode(head2,5);
    insertNode(head2,4);
    insertNode(head2,2);
    
    cout << "Before Merging two sorting Linked List " << endl;
    print(head1);
    print(head2);

    cout << "After Merging two sorted Linked List "<< endl;

    Node* merge_head = mergeSortLL(head1,head2);
    
    print(merge_head);


    return 0;

}