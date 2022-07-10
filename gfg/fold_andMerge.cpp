/************************************************
   
   Following is the linkedList class structure:

   class List {
      public:
          int data;
          List *next;

          List(int val) {
              this->data = val;
              next = NULL;
          }
          ~List() {
              if (next != NULL) {
                  delete next;
              }
          }
   };

*************************************************/
void insertAtHead(List* head,List* tail,int d){
   
    List* temp = new List(d);
    if(head == NULL){
        temp = head;
    }
    temp -> next = head;
    head = temp;
}
int getLength(List* head){
    List* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
List* reverse(List* &head){
      if(head == NULL || head->next == NULL){
           return head;
     }   
    List* prev = NULL;
    List* curr = head;
    List* forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    
    return prev;
}
List* multi(List* head1,List* head2){
    List* revHead2 = reverse(head2);
    List* temp2 = revHead2;
    List* temp1 = head1;
    List* newHead = NULL;
    List* newTail = NULL;
    
    while(temp2 != NULL && temp1 != NULL){
       int d = temp2->data * temp1->data;
        insertAtHead(newHead,newTail,d);
    }
}
List* foldAndMerge(List *head) {

   //fold
    int len = getLength(head);
    List* curr = head;
    int i = 1;
    List* head2 = NULL;
    List* forward = NULL;
    while(i < len/2){
        curr = curr->next;
        
        if(i == len/2){
            forward = curr->next;
            head2 = forward;
            curr->next = NULL;
            while(forward -> next != NULL){
                forward = forward ->next;
            } 
        }
        i++;
    }
   List* rt_head =  multi(head,head2);
    return rt_head;
}