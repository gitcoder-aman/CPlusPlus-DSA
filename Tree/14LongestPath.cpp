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
//Time Complexity = O(n)
//Space Complexity = O(n)
class Solution{

    public:
    void Solve(Node* root,int sum,int &maxSum,int len,int &maxLen){

         // base case
         if(root == NULL){

             if(len > maxLen){
                 maxLen = len;
                 maxSum = sum;
             }
             else if(len == maxLen){
                 maxSum = max(sum,maxSum);
             }
             return;
         } 
         sum = sum + root->data;

         Solve(root->left,sum,maxSum,len+1,maxLen);
         Solve(root->right,sum,maxSum,len+1,maxLen);

    }

    int sumOfLongRootToLeafPath(Node* root){
        int len = 0;
        int maxLen = 0;

        int sum = 0;
        int maxSum = INT_MIN;

        Solve(root,sum,maxSum,len,maxLen);
        return maxSum;
    }
};
int main(){

    Node* root = new Node(4);
    // moving to left subtree
    root->left = new Node(2);
    root->left->left = new Node(7);
    root->left->right = new Node(1);
    root->left->right->left = new Node(6);

    // moving to right subtree
    root->right = new Node(5);
    root->right->left = new Node(2);
    root->right->right = new Node(3);

    Solution obj;
    cout << obj.sumOfLongRootToLeafPath(root);  
          
    return 0;

}