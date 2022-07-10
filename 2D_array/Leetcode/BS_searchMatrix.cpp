#include<iostream>
#include<vector>
using namespace std;

// leetcode = 240
bool binarySearch(vector<vector<int>>& matrix,int target){

    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row*col - 1;
    
    int rowIndex = 0;
    int colIndex = col - 1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];
        if(element == target)
        return true;
        if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return false;
    
}
int main(){
    
    vector<vector<int>>arr{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

   cout << binarySearch(arr,19);
    
    return 0;

}