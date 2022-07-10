#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node{
     
     public:

     int data;
     Node* right;
     Node* left;
     Node(int val){
         this->data = val;
         right = left = NULL;
     }
};
class Solution{
       public:
     vector<int>BottomView(Node* root){
     
     vector<int>ans;
     if(root == NULL){
         return ans;
     }
      map<int,int>topNode; // horizontal data ,data of Node
     
       queue<pair<Node*,int> > q;
       
       q.push(make_pair(root,0));

       while (!q.empty())
       {
           pair<Node*,int>temp = q.front();
           q.pop();
           Node* frontNode = temp.first;
           int hd = temp.second;

           //if one value is prsent for a HD, then do nothing

               topNode[hd] = frontNode->data;
               
           if(frontNode->left){
               q.push(make_pair(frontNode->left,hd-1));
           }
           if(frontNode->right){
               q.push(make_pair(frontNode->right,hd+1));
           }
       }
       for(auto i : topNode){
           ans.push_back(i.second);
       }
       return ans;
     }

};
int main(){

     Node* root = new Node(20);
    // going to left
    root->left = new Node(8);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    //going to right;
    root->right = new Node(22);
    root->right->right = new Node(22);
    root->right->right = new Node(25);
    
    Solution obj;
    vector<int>ans = obj.BottomView(root);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;

}