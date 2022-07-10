#include<iostream>
#include<vector>
using namespace std;

// leetcode = 74
bool binarySearchIn2D(vector<vector<int>>& matrix,int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col - 1;
    int mid = start + (end-start)/2;
     // time complexity = O(log(row*col))
    while (start <= end)
    {                        //row    //col
        int element = matrix[mid/col][mid%col];
         if(element == target)
          return true;
          if(element > target){
              end = mid - 1;
          }
          else{
              start = mid + 1;
          }
          mid = start + (end-start)/2;
    }
    return false;
    
}
int main(){

    vector<vector<int>>arr{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout << binarySearchIn2D(arr,7);
    return 0;

}