#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution{
        
        private:
       void solve(string str,int index,string output,vector<string>&ans){
            
            //base case
            if(index >= str.length()){
                if(output != " ")
                ans.push_back(output);
              return;
            }
            //exclude
            solve(str,index+1,output,ans);
            
            //include
            char element = str[index];
            output.push_back(element);

            solve(str,index+1,output,ans);

       }
       
       public:
        vector<string>subsequence(string str){
          
           vector<string>ans;
           int index = 0;
           string output = "";
           solve(str,index,output,ans);
           
           return ans;

        }
           
};
int main(){

    Solution obj;
    string str = "abc";
   
   vector<string>ans = obj.subsequence(str);
   for(auto i: ans){
       cout << i <<endl;
   }
   
    return 0;

}