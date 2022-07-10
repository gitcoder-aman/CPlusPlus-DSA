#include<iostream>
#include<vector>
#include<map>
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
     
     vector<int>topView(Node* root){
     
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

           if(topNode.find(hd) == topNode.end()){
               topNode[hd] = frontNode->data;
           }
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

    Node* root = new Node(10);
    // going to left
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(60);

    //going to right;
    root->right = new Node(30);
    root->right->left = new Node(90);
    root->right->right = new Node(100);
    
    Solution obj;
    vector<int>ans = obj.topView(root);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;

}