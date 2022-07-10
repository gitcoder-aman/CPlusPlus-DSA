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
class Solution{

   public:
   Node* solve(Node* root,int &k,int &node){
    
          //base case
          if(root == NULL)
          return NULL;

          if(root->data == node){
              return root;
          }
          Node* leftAns = solve(root->left,k,node);
          Node* rightAns = solve(root->right,k,node);

          //wapas
          if(leftAns != NULL && rightAns == NULL)
          {
              k--;
              if(k <= 0){
                  k = INT_MAX;
                  //answer lock
                  return root;
              }
              return leftAns;
          }
          if(leftAns == NULL && rightAns != NULL){

              k--;
              if(k <= 0){
                  //answer lock
                  k = INT_MAX;
                  return root;
              }
              return rightAns;
          }
    return NULL;
   }
   int kthAncestor(Node* root,int k,int node){

     Node* ans = solve(root,k,node);
     if(ans == NULL && ans->data == node)
     return -1;
     else
     return ans->data;
    
   }

};
int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->right = new Node(5);
    root->right->left->right->left = new Node(7);
    root->right->right = new Node(6);

    Solution obj;
    int k = 1,node = 5;
    cout << obj.kthAncestor(root,k,node);

    return 0;

}