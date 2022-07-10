#include<iostream>
#include<vector>
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

    void solve(Node* root,int k,int &count,vector<int>path){

        //base case
        if(root == NULL){
            return;
        }
        path.push_back(root->data);

        //left
        solve(root->left,k,count,path);
        //right
        solve(root->right,k,count,path);

        //check for K sum

        int size = path.size();
        int sum = 0;
        for (int i = size-1; i >= 0; i--)
        {
            sum += path[i]; // sum as a contigious form
            if(sum == k) 
            count++;
        }
        path.pop_back();
        
    }
    int SumK(Node* root,int k){
      
      vector<int>path;
      int count = 0;
      solve(root,k,count,path);
      return count;
    }
};
int main(){

    Node* root = new Node(1);
    // moving to left subtree
    root->left = new Node(3);
    root->left->right = new Node(1);
    root->left->right->left = new Node(1);
    root->left->left = new Node(2);

    //moving to right subtree
    root->right = new Node(-1);
    root->right->left = new Node(4);
    root->right->left->left = new Node(1);
    root->right->left->right = new Node(2);
    
    root->right->right = new Node(5);
    root->right->right->right = new Node(6);

    Solution obj;
    
    int k = 5;
    cout << obj.SumK(root,k);

    return 0;

}