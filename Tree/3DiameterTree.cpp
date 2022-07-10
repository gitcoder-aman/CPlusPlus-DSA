#include<iostream>
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
//Time complexity = O(n^2)
//space complexity = O(H) H for height of tree
class Solution{
    
    private:
    int height(Node* root){

       if(root == NULL)
       return 0;

       int left = height(root->left);
       int right = height(root->right);

       int ans = max(left,right)+1;
       return ans; 
    } 
    public:

    int diameter(Node* root){
        //Base case
        if(root == NULL){
            return 0;
        }
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + height(root->right) + 1;

        int ans = max(op1,max(op2,op3));
        return ans;
    }
};
//Time complexity = O(n)
//space complexity = O(H) H for height of tree
class Sol{

     public:
       // time complexity = O(n)
     pair<int,int>diameterFast(Node* root){
         //base case
         if(root == NULL){
             pair<int,int>p = make_pair(0,0);
             return p;
         }
         pair<int,int>left = diameterFast(root->left);
         pair<int,int>right = diameterFast(root->right);
         
         //diameter in first and height in second
         int op1 = left.first;
         int op2 = right.first;
         int op3 = left.second + right.second + 1;

         pair<int,int>ans;
         ans.first = max(op1,max(op2,op3));
         ans.second = max(left.second,right.second) + 1;
         return ans;
     }
     int diameter(Node* root){
         return diameterFast(root).first;
     }

};
int main(){

    Node* root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(60);
    root->right = new Node(30);
    
    // Solution obj;
    // cout << obj.diameter(root) << endl;

    Sol ob;
    cout << ob.diameter(root) << endl;

    return 0;

}