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
class Solution{

    private:
    pair<bool,int> isSumTreeFast(Node* root){

        // base case
        if(root == NULL){
            pair<bool,int>p = make_pair(true,0);
            return p;
        }

        //for leaf Node
        if(root->left == NULL && root->right == NULL){
            pair<bool,int>p = make_pair(true,root->data);
            return p;
        }
        pair<bool,int>leftAns = isSumTreeFast(root->left);
        pair<bool,int>rightAns = isSumTreeFast(root->right);

        bool isleftSumTree = leftAns.first;
        bool isrightSumTree = rightAns.first;

        int leftSum = leftAns.second;
        int rightSum = rightAns.second;

        bool condition = root->data == leftSum + rightSum;
        pair<bool,int>ans;
        if(isleftSumTree && isrightSumTree && condition){
            ans.first = true;
            ans.second = root->data + leftSum + rightSum;
        }
        else{
            ans.first = false;
        }
        return ans;

    }
    public: 
     bool isSumTree(Node* root){

         return isSumTreeFast(root).first;
     }

};
int main(){

    Node* root = new Node(3);

    root->left = new Node(1);
    root->right = new Node(2);

    Solution ob;
   cout << ob.isSumTree(root) << endl;
    return 0;

}