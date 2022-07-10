#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

class Solution{
      public:
      string firstNonRepeating(string s){

         unordered_map<char,int>count; 
         queue<int>q;

         string ans = "";
         for (int i = 0; i < s.length(); i++)
         {
             char ch = s[i];
             //increase count
             count[ch]++;
             //push into queue
             q.push(ch);
           while (!q.empty())
            {
                if(count[q.front()] > 1){
                    //reapeating character
                    q.pop();
                }
                else{
                     ans.push_back(q.front());
                     break;
                }
            }
            if(q.empty()){
                ans.push_back('#');
            }
         }
         return ans;
      }
};
int main(){
    
    string str = "aabc";

    Solution obj;
    string ans = obj.firstNonRepeating(str);
    cout << ans << endl;
    return 0;

}