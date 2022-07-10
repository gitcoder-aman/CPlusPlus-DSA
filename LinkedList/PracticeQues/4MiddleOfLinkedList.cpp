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
// space complexity = O(1)
int getLength(Node* head){
    
     int len = 0;
    while (head != NULL)
    {
        len++;
        head = head -> next;
    }
    return len;
}
Node* findMiddle(Node* head){

   int len = getLength(head);
    int ans = len/2;

    Node* temp = head;
    int cnt = 0;

    while (cnt < ans)
    {
        temp  = temp -> next;
        cnt++;
    }
    return temp;
}
//optimized solution
//Time complexity = O(n/2)
//space complexity = O(1)
Node* getMiddle(Node* head){

    if(head == NULL || head -> next == NULL)
    return head;
    if(head -> next ->next == NULL){
        return head -> next;
    }

    Node* slow = head;
    Node* fast = head->next;
    while (fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
    
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

//   Node* pos_node = findMiddle(head);
     Node* pos_node = getMiddle(head);
  cout << pos_node->data << endl;    
    return 0;

}