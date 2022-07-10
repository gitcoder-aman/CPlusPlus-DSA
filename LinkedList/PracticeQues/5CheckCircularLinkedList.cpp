#include<iostream>
#include<map>
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
void insertNode(Node* &tail,int element ,int d){

    //assuming that the element is present in the list
    
    //empty list
    if(tail == NULL){
      
      Node* newNode = new Node(d);
      tail = newNode;
      newNode -> next = newNode;
    }
    else{
        //non- empty list 
        //assuming that the element is present in the list

        Node* curr = tail;
        while (curr->data != element)
        {
            curr = curr -> next;
        }
        //element found -> curr is repersenting element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
        
    }
}
//Time Complexity= O(n)
//Space Complexity= O(1)
bool isCircularList(Node* head){
      
      //empty List
    if(head == NULL) {
        return true;
    }
    Node* temp = head -> next;
    while (temp != NULL && temp != head)
    {
        temp = temp -> next;
    }
    if(temp == head){
        return true;
    }
    return false;
}
//different logic
bool isCircular(Node * head) {
    // If head is already NULL, then it is the circular linked list
    // with length zero.
    if (head == NULL) {
        return true;
    }

    // If next pointer of head is already NULL, then it the linear linked
    // list of length 1, hence we return false here.
    if (head -> next == NULL) {
        return false;
    }

    // Initialising slow and fast pointers with head.
    Node * slow = head, * fast = head;

    // Iterating through the linkedlist till, fast doesn't reach end of 
    // linked list or slow pointer will not become equal to fast pointer.
    while (fast != NULL && fast -> next != NULL) {

        // Moving slow pointer by one step.
        slow = slow -> next;
        // Moving fast pointer by two steps.
        fast = fast -> next -> next;

        // Checking if updated slow and fast pointer values are same or not.
        if (slow == fast) {
            break;
        }

    }

    // After completing the traversal, if slow and fast pointers meet and 
    // the node of meeting is node pointed by head, then linkedlist is circular.
    if (slow == fast && slow == head) {
        return true;
    }

    // If linkedlist is not circular, then return false.
    return false;
}
int main(){

    Node* tail = NULL;

    //empty list me insert kar rhe
    insertNode(tail,5,3);

    insertNode(tail,3,5);

    insertNode(tail,5,7);

    insertNode(tail,3,9);

    if(isCircular(tail)){
        cout << "Linked List is Circular in Nature "<< endl;
    }
    else{
        cout << "Linked List is Not Cicular in Nature " << endl;
    }
    return 0;

}