#include<iostream>
#include<vector>
using namespace std;

vector<int>spiral_spring(vector<vector<int>>matrix){

    int row = matrix.size();
    int col = matrix[0].size();

    int total = row*col;
    int count = 0;
    
    int startRow = 0;
    int startCol = 0;
    int endRow = row - 1;
    int endCol = col - 1;

    vector<int>ans;

    while (count < total)
    {
        // printing starting row
        for(int index = startCol; (count < total) && (index <= endCol); index++){
           ans.push_back(matrix[startRow][index]);
           count++;
        }
        startRow++;
         // printing ending column
        for(int index = startRow; (count < total) && (index <= endRow); index++){
           ans.push_back(matrix[index][endCol]);
           count++;
        }
        endCol--;
        // printing ending row

        for(int index = endCol; (count < total) && (index >= startCol); index--){
             ans.push_back(matrix[endRow][index]);
             count++;
        }
        endRow--;
        // printing starting column

        for(int index = endRow; (count < total) && (index >= startRow); index--){
             ans.push_back(matrix[index][startCol]);
             count++;
        }
        startCol++;
    }
    return ans;

}
void print_ans(vector<int> ans){
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
}
int main(){

    // vector<int>matrix[3][6];
    vector<vector<int>>matrix{{1,2,3,4},{14,15,16,5},{13,20,17,6},{12,19,18,7},{11,10,9,8}};
   vector<int>ans = spiral_spring(matrix);

   print_ans(ans);
    return 0;

}