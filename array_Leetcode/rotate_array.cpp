#include<iostream>
#include<vector>
using namespace std;

// time complexity = O(n)
// space complexity = O(n)
void rotate_array(vector<int>& nums,int k){

    vector<int>temp(nums.size());
    for(int i =0 ;i < nums.size();i++){

        temp[(i+k)% nums.size()] = nums[i];
    }
    for(int i = 0; i < nums.size(); i++){
        cout << temp[i] << " ";
    }

}
int main(){
      int k =3; //rotate after this iterator
     vector<int>arr{1,2,3,4,5,6,7};

     rotate_array(arr,3);
    return 0;

}