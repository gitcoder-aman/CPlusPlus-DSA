#include<iostream>
using namespace std;

class Node{

    public:
    Node* left;
    Node* right;
    int data;
    Node(int d){
        this->data = d;
        left = right = NULL;
    }
};
//Time Complexity = O(n)
//Time complexity = O(H)
class Solution{

    public:
    bool isIdentical(Node* r1,Node* r2){

        //base case
        if(r1 == NULL && r2 == NULL){
            return true;
        }
        if(r1 != NULL && r2 == NULL){
            return false;
        }
        if(r2 != NULL && r1 == NULL){
            return false;
        }

        
        bool left = isIdentical(r1->left,r2->left);
        bool right = isIdentical(r1->right,r2->right);

        bool value = (r1->data == r2->data);

        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){

    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    
    Solution ob;
    cout << ob.isIdentical(root1,root2) << endl;
    return 0;

}