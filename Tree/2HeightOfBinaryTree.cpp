#include<iostream>
using namespace std;

//Time complexity = O(n)
//space complexity = O(H) H for height of tree
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
int height(Node* root){

       if(root == NULL)
       return 0;

       int left = height(root->left);
       int right = height(root->right);

       int ans = max(left,right)+1;
       return ans; 
}
int main(){

    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    root->right->left = new Node(4);

    cout << height(root) << endl;

    return 0;

}