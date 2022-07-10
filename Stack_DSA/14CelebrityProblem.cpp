#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//Time complexity = O(n)
class Solution{
    private:
    bool knows(vector<vector<int>>&M,int a,int b){

        if(M[a][b] == 1)
        return true;
        else
        return false;
    }

    public:
    int celebrity(vector<vector<int>>&M,int n ){
    
     stack<int>s;
     //step 1: push all element in stack
     for(int i = 0; i < n; i++){
         s.push(i); // pushes 0,1,2
     }
    //step2: get 2 Element and compare them

    while (s.size() > 1)
    {
        int a =s.top();
        s.pop();

        int b = s.top();
        s.pop();
        
        if(knows(M,a,b)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
    int ans = s.top();
    //step 3: single element in stack is potential celebrity

    //so verify it

    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if(M[ans][i] == 0){
          zeroCount++;
        }
    }

    //all zeroes
    if(zeroCount != n){
        return -1;
    }
    //column check
    int oneCount = 0;
 
    for (int i = 0; i < n; i++)
    {
        if(M[i][ans] == 1){
          oneCount++;
        }
    }

    if(oneCount != n-1){
       return -1;
    }
    return ans;
  }
};
int main(){

    Solution obj;
    vector<vector<int>>v{{0,1,0},
                         {0,0,0},
                         {0,1,0}
                         };
    int  n = v.size();
    int  ans = obj.celebrity(v,n);
    cout << ans << endl;
    
    return 0;

}