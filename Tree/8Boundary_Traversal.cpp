#include<iostream>
#include<vector>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){

     this->data = d; 
     left = right = NULL;
    }
};
class Solution{

    public:
    void traverseLeft(Node* root, vector<int>&ans){
       
       if((root == NULL )||(root->left == NULL && root->right == NULL)){
           return;
       }
       ans.push_back(root->data);

            if(root->left)
                traverseLeft(root->left,ans);
            else
                traverseLeft(root->right,ans);
    }
    void traverseLeaf(Node* root, vector<int>&ans){
         
         //base case
         if(root == NULL)
         return;

         if(root->left == NULL && root->right == NULL){
             ans.push_back(root->data);
             return;
         }
         traverseLeaf(root->left,ans);
         traverseLeaf(root->right,ans);
    }
    void traverseRight(Node* root, vector<int>&ans){
        
        if((root == NULL )||(root->left == NULL && root->right == NULL)){
           return;
        }
        if(root->right)
           traverseRight(root->right,ans);
        else
           traverseRight(root->left,ans);
        
        // when return Nodes
        ans.push_back(root->data);
    }
    vector<int>boundary(Node* root){
         vector<int>ans;

         if(root == NULL){
             return ans;
         }
         ans.push_back(root->data);

         //left part Store/Print
         traverseLeft(root->left,ans);

         //traverse Leaf Nodes

         //Left SubTree
         traverseLeaf(root->left,ans);
         //Right SubTree
         traverseLeaf(root->right,ans);

         //traverse Right Part
         traverseRight(root->right,ans);

         return ans;
       
    }
    
};
int main(){

    Node* root  = new Node(1);
    
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);

    // Now go to right Node of head root
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution obj;
    vector<int>ans = obj.boundary(root);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    

    return 0;

}