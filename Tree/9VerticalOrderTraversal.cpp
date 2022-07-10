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
        
        Node(int d){

        this->data = d; 
        left = right = NULL;
        } 
};
class Solution{

    public:
    vector<int>verticalOrder(Node* root){
        
        map<int,map<int,vector<int> > >nodes;
        queue<pair<Node*,pair<int,int>>>q;
        vector<int>ans;

        if(root == NULL)
        return ans;

        q.push(make_pair(root,make_pair(0,0)));
        while (!q.empty())
        {
            pair<Node*,pair<int,int> > temp = q.front();
            q.pop();

            Node* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            nodes[hd][lvl].push_back(frontNode->data);

            if(frontNode->left) 
              q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));

              if(frontNode->right)
                q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
        
        }

        for(auto i : nodes){
           for(auto j:i.second){
               for(auto k:j.second){
                   ans.push_back(k);
               }
           }
       }
       return ans;

    }
};
int main(){

    Node* root = new Node(1);

    // going to left subtree
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // going to right subtree
    
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->left->right = new Node(8);

    root->right->right = new Node(7);
    root->right->right->right = new Node(9);

    Solution obj;

    vector<int>ans = obj.verticalOrder(root);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;

}