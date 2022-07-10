#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// leetcode = 48

// matrix rotate 90 degree
// vector<vector<int>> rotate_matrix(vector<vector<int>>& matrix){

//        vector<vector<int>>ans{{0,0,0},{0,0,0},{0,0,0}};
         
//             for (int row = 0; row < matrix.size(); row++)
//             {
//                  int size = matrix.size()-1; // 2
//                 for (int col = 0; col < matrix[0].size(); col++)
//                 {     
//                        ans[row][col] = matrix[size--][row];
//                 } 
//             }
             
//      return ans;
// }
void print(vector<vector<int>>ans){
    for(int i = 0; i < ans.size(); i++){
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j]<<" ";
        }cout << endl;
    }
}
vector<vector<int>> rotate(vector<vector<int>>& matrix){
   //time complexity = O(n^2)
   int n = matrix.size();
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < i; j++)
       {
           swap(matrix[i][j],matrix[j][i]);
       }
   }
   for (int i = 0; i < n; i++)
   {
       reverse(matrix[i].begin(),matrix[i].end());
   }
   return matrix;
   
}
int main(){

    vector<vector<int>>arr{{1,2,3},{4,5,6},{7,8,9}};
   //vector<vector<int>>ans = rotate_matrix(arr);
   vector<vector<int>>ans = rotate(arr);

   
    print(ans);
    return 0;

}