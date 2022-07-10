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
   int solve(Node* root,int node,int k,int &ans){

       //base case
       if(root == NULL){
           return 0;
       }
       if(root->data == node){
           return 1;
       }
       int lf = solve(root->left,node,k,ans);
       int rf = solve(root->right,node,k,ans);

       if(lf == k || rf == k){
           ans = root->data;
       }
       if(lf){
           return lf+1;
       }
       else if(rf){
           return rf + 1;
       }
       else{
           return 0;
       }
   }
   int kthAncestor(Node* root,int k,int node){

      int ans = -1;
      solve(root,node,k,ans);
      return ans; 
    
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