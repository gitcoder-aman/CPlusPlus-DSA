#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data = val;
        left = right = NULL;
    }
};
//Time complexity = O(n)
//Space Complexity = O(H)
class Solution{

    public:
    Node* LCA(Node* root,int n1,int n2){
        
        //base case
        if(root == NULL){
            return NULL;
        }
        if(root->data == n1 || root->data == n2){
            return root;
        }
        Node* leftAns = LCA(root->left,n1,n2);
        Node* rightAns = LCA(root->right,n1,n2);
        
        if(leftAns != NULL && rightAns != NULL){
            return root;
        }
        else if(leftAns != NULL && rightAns == NULL){ // hiting this condition in that program
            return leftAns;
        }
        else if(leftAns == NULL && rightAns != NULL){
            return rightAns;
        }
        else
        return NULL;
    }
    
};
int main(){

    Node* root = new Node(1);
    // moving to left Subtree
    root->left = new Node(2);
    root->left->left = new Node(6);
    root->left->left->right = new Node(8);

    //moving to right part subtree
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    root->right->right->left = new Node(21);


    Solution obj;

    cout << obj.LCA(root,21,4)->data;

    return 0;

}