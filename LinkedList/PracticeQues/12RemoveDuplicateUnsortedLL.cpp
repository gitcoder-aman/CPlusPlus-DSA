#include<iostream>
#include <unordered_map>
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
    //when first node is created
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
     //new node create

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
//Time complexity = O(n^2)
//space Complexity = O(1)
Node* uniqueUnsortedList(Node* &head,Node* &tail){
    
    Node* curr = head;
    Node* temp = head;
    while (curr != NULL)
    {
        Node* prev = curr;
        temp = curr -> next;
        while (temp != NULL)
        {
            if(temp -> data == curr -> data){ 
                Node* next = temp->next;
                prev->next = next;
                delete(temp);
                temp = next;

                tail = prev;// updating tail value after deleted node
            }
            else{
                temp = temp -> next;
                prev = prev -> next;
            }
        }
        curr = curr -> next;
        
    }
    return head;
}
//Time complexity = O(n)
//space complexity = O(n)
Node* removeDuplicates(Node* &head,Node* &tail)
{
    if(head == NULL || head->next == NULL){
        return head;
    }
   unordered_map<int,bool>visited;
   Node* curr = head;
   Node* prev = NULL;
  
   while(curr != NULL){
       if(visited[curr->data]){
           prev->next = curr->next;
           delete(curr);
           curr = prev->next;

           tail = prev; // tail are updating after deleteing duplicates nodes
       }
       else{
           visited[curr->data] = true;
           prev = curr;
           curr = curr->next;
       }
       
   }
    return head;
}
int main(){
    
    //head pointed to node1
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    
                      //insert at tail  with sorted order
    insertAtTail(tail,head,5);
    insertAtTail(tail,head,2);
    insertAtTail(tail,head,5);
    insertAtTail(tail,head,5);
    insertAtTail(tail,head,1);
    insertAtTail(tail,head,2);
    
    print(head);
    
    cout << "After duplicate value removed----- " << endl;
    // Node* h = uniqueUnsortedList(head,tail);
    Node* h = removeDuplicates(head,tail); //passing tail only tail updated
    print(h);

    cout << "head " << head ->data << endl;
    cout << "tail " << tail ->data << endl; 
    return 0;

}