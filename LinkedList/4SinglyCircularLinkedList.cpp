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
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data "<< value << endl;
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
void deleteNode(Node* &tail,int value){

    //empty list
    if(tail == NULL){
        cout << "List is empty, please check again "<< endl;
        return;
    }
    else{
        //Non-empty list
        //assuming that "value is present in the linked list "
        Node* prev = tail;
        Node* curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev){
            tail = NULL;
        }
        //>=2 Node Linked List
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}
//traverse
void print(Node* &tail){

    //empty list
    if(tail == NULL){
        cout << "List is empty "<< endl;
        return;
    }
    Node* temp = tail;
   do
   {
       cout << temp->data << " ";
       temp = temp->next;

   } while (tail != temp);
   cout << endl;
}
int main(){

    Node* tail = NULL;
    
    //empty list me insert kar rhe
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,3,9);
    print(tail);

    cout << "delete process "<< endl;

    deleteNode(tail,3);
    print(tail);
    cout << tail->data << endl;
    return 0;

}