#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node {

    public:
        int data;
        Node* left;
        Node* right;
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    
    if(data == -1){
        return NULL;
    }
    cout << "Enter data for inserting in left " << data << endl;
    root -> left = buildTree(root->left);
    cout << "Enter data for inserting in right " << data << endl;
    root -> right  = buildTree(root->right);
    return root;
}
void levelOrderTraversal(Node* root){

     queue< Node* > q;
     q.push(root);
     q.push(NULL); // for endl

     while (!q.empty())
     {
        Node* temp = q.front();
        q.pop();
        
        //seperator
        if(temp == NULL){ //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()){ //queue still has some child nodes
                q.push(NULL); // for endl
            }
        }
        else{
              
          cout << temp -> data << " ";
             if(temp -> left) {
                 q.push(temp->left);
             } 
             if(temp -> right){
                 q.push(temp->right);
             }
        }
     }
}
void inorder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root->left);  // L
    cout << root->data << " "; // N
    inorder(root->right);    // R😁
}
//time complexity = O(n)
void inorderIterative(Node* root){

      if(root == NULL)
      return;
   
   //1st step: creates an empty stack:
    stack<Node*>s;

   // step 2//start from root Node(set current node to root node)
    Node* curr = root;

    while (!s.empty() ||  curr != NULL)
    {
        //3rd step pushes all element in stack
        while (curr != NULL)
        {
           s.push(curr);
           curr = curr->left;
        }
        // current must be NULL at this point
        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        //we have visited the node and its left subtree. Now ,it's right subtree's turn
        curr = curr->right;
    }
    
}
void preorder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    cout << root->data << " "; // N
    preorder(root->left);  // L
    preorder(root->right);    // R😁
}
//time complexity = O(n)
//space complexity = O(H)
void preorderIterative(Node* root) {

    if(root == NULL){
        return;
    }
    stack<Node*>s;
    
    Node* curr = root;
    
    while (!s.empty() || curr != NULL)
    {
        //print left  children while exist and keep pushing right into the stack

        while (curr != NULL)
        {
           cout << curr -> data << " ";
           if(curr->right)
           s.push(curr->right);

           curr = curr->left;
        }
        //we reach when curr is NULL, so we take out a right child from stack
        if(!s.empty()){
            curr = s.top();
            s.pop();
        }   
    }
}
void postorder(Node* root){
    //base case
    if(root == NULL){
        return;
    }
    postorder(root->left);  // L
    postorder(root->right);    // R😁
    cout << root->data << " "; // N
}
/*void postorderIterative(Node* root) {

    
    if(root == NULL){
        return;
    }
    Node* curr = root;
    while (!s.empty() || curr != NULL)
    {
        while (curr != NULL)
        {
            if(curr->right)
            s.push(curr->right);

            curr = curr->left;
        }
        
    }
    
}*/
void buildFromLevelOrder(Node* &root) {

    queue<Node*>q;
    cout << "Enter data for root " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            temp -> left = new Node(leftData);
            q.push(temp->left);
        }
        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp -> right = new Node(rightData);
            q.push(temp->right);
        }
    }  
}
int main(){

    Node* root = NULL;
    //buildTree
    root = buildTree(root);
    
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout << "Printing the level order traversal output " << endl;
    levelOrderTraversal(root);

    cout << "inorder traversal is :";
    inorder(root);
    cout << endl;
    cout << "inorder Iterative way :";
    inorderIterative(root);
    cout << endl;
    cout << "preorder traversal is :";
    preorder(root);
    cout << endl;
    cout << "preorder traversal Iterative way: ";
    preorderIterative(root);
    cout << endl;
    cout << "postorder traversal is :";
    postorder(root);
    cout << endl;
    // cout << "post order traversal Iterative way: ";
    // postorderIterative(root);

    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    return 0;
 
}