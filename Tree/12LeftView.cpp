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
    void solve(Node* root, vector<int>&ans,int level){

        //base case
        if(root == NULL){
            return;
        }
        if(ans.size() == level){
            ans.push_back(root->data);
        }
        solve(root->left,ans,level+1);
        solve(root->right,ans,level+1);
    }
    vector<int>leftView(Node* root){
      
     vector<int>ans;
     solve(root,ans,0);
     return ans;
    }

};
int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->left->left->right = new Node(8);

    //going to right 

    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

     Solution obj;
    vector<int>ans = obj.leftView(root);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    } 
    return 0;

}