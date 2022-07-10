#include<iostream>
#include<cstdlib>
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
//Time complexity = O(n)
//space complexity = O(H) // H for height of tree
class Solution{
   
   public:
   pair<int,int>isBalancedFast(Node* root){
      
      //base case
      if(root == NULL){
          pair<bool,int>p = make_pair(true,0);
          return p;
      }
      pair<int,int>left  = isBalancedFast(root->left);
      pair<int,int>right = isBalancedFast(root->right);

      bool leftAns  = left.first;
      bool rightAns = right.first;
                 //abs[height(left) - height(right)] <= 1
      bool diff = abs(left.second-right.second) <= 1;
      
      pair<bool,int>ans;
      ans.second = max(left.second,right.second) + 1;

      if(leftAns && rightAns && diff){
          ans.first = true;
      }
      else{
          ans.first = false;
      }
      return ans;
   }
   bool isBalanced(Node* root){
       return isBalancedFast(root).first;
   }

};
int main(){

    Node* root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->right = new Node(30);
    root->left->right = new Node(60);
    
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->left->right = new Node(3);
    
    Solution ob;
    cout << "This is Balanced Tree " << endl;
    cout << ob.isBalanced(root) << endl;
    cout << "This is Not Balanced Tree " << endl;
    cout << ob.isBalanced(root1) << endl;
    return 0;

}