#include<iostream>
#include<vector>
#include<queue>
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
    
    vector<int>diagonalTraversal(Node* root){
     
     vector<int>ans;
     queue<Node*>q;
       
    q.push(root);
    while( q.size() != 0){
      
      Node* frontNode = q.front();
      q.pop();

      while (frontNode != NULL)
      {
          ans.push_back(frontNode->data);

          if(frontNode->left){
              q.push(frontNode->left);
          }
          frontNode = frontNode->right;
      }
      
    }

       return ans;

    }


};
int main(){

    Node* root = new Node(8);
    //going to left subtree of root
    root->left = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(6);
    root->left->right->left = new Node(4);
    root->left->right->right = new Node(7);
    
    // going to right subtree of root

    root->right = new Node(10);
    root->right->right = new Node(14);
    root->right->right->left = new Node(14);

    Solution obj;
    vector<int>ans = obj.diagonalTraversal(root);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;

}