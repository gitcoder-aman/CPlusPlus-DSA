#include<map>
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
bool detectLoop(Node* head){

    if(head == NULL)
    return false;

    map<Node*,bool>visited;
    
    Node* temp = head;

    while (temp != NULL)
    {
        //cycle is present
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
    
}
int main(){

    Node* tail = NULL;
    
    //empty list me insert kar rhe
    insertNode(tail,5,3);

    insertNode(tail,3,5);

    insertNode(tail,5,7);

    insertNode(tail,3,9);

    print(tail);
    cout << "Loop is detected "<< detectLoop(tail) << endl;
    return 0;

}