#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
       
        private:
         void solve(vector<int>& nums,int index,vector<vector<int>>& ans){
           //base case
           if(index >= nums.size()){
               ans.push_back(nums);
               return;
           }
           for (int j = index; j < nums.size(); j++)
           {
               swap(nums[index],nums[j]);
               solve(nums,index+1,ans);

               //backtrack
               swap(nums[index],nums[j]);
           }
           
         }


        public:
        vector<vector<int>> Permutation(vector<int>& nums){

            int index = 0;
            vector<vector<int>>ans;

            solve(nums,index,ans);
            return ans;
        }

     
};
void print(vector<vector<int>>& ans){
           
           for (int i = 0; i < ans.size(); i++)
           {
               for (int j = 0; j < ans[0].size(); j++)
               {
                   cout << ans[i][j]<< " ";
               }cout << endl;
               
           }
           
}
int main(){

    vector<int>nums{1,2,3};
    Solution obj;
    vector<vector<int>> ans = obj.Permutation(nums);
 
   print(ans);
    return 0;

}