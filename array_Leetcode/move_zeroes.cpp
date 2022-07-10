#include<iostream>
#include<vector>
using namespace std;

void movezeroes(vector<int>& nums){

       int nonzero = 0;
        for(int j = 0; j < nums.size() ;j++){
            if(nums[j] != 0){
                swap(nums[nonzero],nums[j]);
                nonzero++;
            }
        }
        for(int i = 0;i < nums.size(); i++){
            cout << nums[i]<< " ";
        }
}
int main(){

    vector<int>arr{0,1,0,3,12};

    movezeroes(arr);
    return 0;

}