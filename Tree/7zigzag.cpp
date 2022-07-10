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

    vector<int> zigzagTraversal(Node* root){
      
      vector<int>ans;
      if (root == NULL)
      {
          return ans;
      }
      queue<Node*>q;
      q.push(root);

    bool leftToRight = true;
      while (!q.empty())
      {
          int size = q.size();
          //cout << "Size " << size << endl;
          vector<int>temp(size);
          
          //Level Process
          for (int i = 0; i < size; i++)
          {
              //cout << "q.front " << q.front()->data << endl;
              Node* frontNode = q.front();
              q.pop();

              //Normal insert or reverse insert

              int index = leftToRight ? i : size - i - 1;
              temp[index] = frontNode -> data;

              if(frontNode->left){
                  q.push(frontNode->left);
              }
              if(frontNode->right){
                  q.push(frontNode->right);
              }
          }
              //direction to be change
              leftToRight = !leftToRight;
              //cout << "leftToRight " <<leftToRight << endl;

              for(auto i:temp){
                  ans.push_back(i); // value pushes in ans queue
              }
      }
          return ans;
      
    }
};
int main(){

    Node* root = new Node(7);
    //here now moving left side of root
    root->left = new Node(9);

    root->left->left = new Node(8);
    root->left->right = new Node(8);

    root->left->left->left = new Node(10);
    root->left->left->right = new Node(9);

    //Now i am moving in right side of root
    root->right = new Node(7);
    root->right->left = new Node(6);



    Solution obj;
    vector<int>ans =obj.zigzagTraversal(root);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    

    return 0;

}