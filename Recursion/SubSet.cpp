#include<iostream>
#include<vector>
using namespace std;

// leetcode = 78
  class Solution {
    private:
    void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>& ans){
        //base case
        if(index >= nums.size()){
            if(output.size() > 0)  // not store space
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,output,index+1,ans);
        
        //include
       int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;// sub vector
        vector<vector<int>>ans; // 2 D vector
        int index = 0;
        solve(nums,output,index,ans);
        return ans;
    }
};
void print( vector<vector<int>> output){
    
    for (int i = 0; i < output.size() ; i++)
    {
        for (int j = 0; j < output[i].size(); j++)
        {
            cout << output[i][j]<< " ";
        }cout << endl;
        
    }
    
}
int main(){

   Solution obj;
   vector<int>nums={1,2,3};
   vector<vector<int>>ans = obj.subsets(nums);
  
    print(ans);
  
   
    return 0;

}