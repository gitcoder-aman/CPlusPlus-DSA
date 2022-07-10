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
//Time complexity = o(n);
//space complexity = o(n);
//Approach 1
bool checkPailndrome(vector<int> arr){

    int n = arr.size();
    int s = 0;
    int e = n-1;
    while (s <= e)
    {
        if(arr[s] != arr[e]){
            return false;
        }
          s++;
          e--;
    }
    return true;
}
bool isPalindrome1(Node* & head){

    vector<int>arr;
    Node* curr = head;
    while (curr != NULL)
    {
        arr.push_back(curr->data);
        curr = curr->next;
    }
    return checkPailndrome(arr); 
}
//Approach 2

Node* getMid(Node* head){

    Node* slow = head;
    Node* fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}
Node* reverse(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while (curr != NULL)
    {
        forward = curr -> next; //save will be you lost data 
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
// time complexity = O(n)
// space complexity = O(1)
bool isPalindrome2(Node* head){
    if(head -> next == NULL){
        return true;
    }
    //step 1 -> find Middle
    Node* middle = getMid(head);
    //step 2 -> reverse List after Middle
    Node* temp = middle -> next;
    middle -> next = reverse(temp);

    //step 3 - Compare Both halves
    Node* head1 = head;
    Node* head2 = middle->next;

    while (head2 != NULL)
    {
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    //step4 repeat step 2 // convert to original linked list (optional)
    temp = middle -> next;
    middle -> next = reverse(temp);
    return true;
}
int main(){
    
   //create a new node
   Node* tail = NULL;
   Node* head = NULL;
                      //insert at tail  
    insertAtTail(tail,head,1);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,3);
    insertAtTail(tail,head,3);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,1);

    
    print(head);
    //cout << isPalindrome1(head) << endl;
    cout << isPalindrome2(head) << endl;
    
    return 0;

}