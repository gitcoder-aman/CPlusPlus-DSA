#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//Time Complexity = O(n*m)
//Space complexity = O(m)
//m for column and n for row
class Solution{
    private:
    vector<int>nextSmallerElement(int* arr,int n){
        stack<int>s;
        
        s.push(-1);
        vector<int>ans(n);
        
        for(int i=n-1; i>=0; i--){
           int curr = arr[i];
            
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i); 
        }
        return ans;
    }
      vector<int>prevSmallerElement(int* arr,int n){
        stack<int>s;
        
        s.push(-1);
        vector<int>ans(n);
        
        for(int i=0; i<n; i++){
           int curr = arr[i];
            
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
            
        }
        return ans;
    }
    int largestRectangleArea(int* heights,int n)     {
        
        vector<int>next(n);
        next = nextSmallerElement(heights,n);
        
        vector<int>prev(n);
        prev = prevSmallerElement(heights,n);
        
        int area = INT_MIN;
        
        for(int i = 0; i < n; i++){
            int l = heights[i];
            
            if(next[i] == -1){
                next [i] = n;
            }
            int b = next[i] - prev[i] -1;
            int newArea = l*b;
            area = max(area,newArea);
        }
        return area;
    }
  public:
    int maxArea(int M[][4], int n, int m) {
       
       //compute area for first row
       int area = largestRectangleArea(M[0],m);
       
       //for remaning rows
       for(int i=1; i<n; i++){
           for(int j=0; j<m; j++){
               
             //compute by adding previous row's value
               if(M[i][j] != 0)
                  M[i][j] = M[i][j] + M[i-1][j];
               else
                  M[i][j] = 0;
           }
           //entire row is updated now
           int newArea = largestRectangleArea(M[i],m);
           area = max(area,newArea);
       }
      return area;
    }
};
int main(){

    Solution obj;
    
    int arr[4][4] = {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int area = obj.maxArea(arr,4,4);
    cout << area << endl;
    return 0;

}