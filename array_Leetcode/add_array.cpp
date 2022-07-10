#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// time complexity = O(size1+size2)
// space complexity = O(size1+size2)
vector<int>add_array(vector<int>&arr1,int size1,vector<int>&arr2,int size2){

   int num1 = 0;
   int num2 = 0;
   vector<int>ans;

   for(int i = 0;i < size1;i++){
       num1 = num1 * 10 +arr1[i];
   }
   
   for(int j = 0;j < size2;j++){
       num2 = num2 * 10 +arr2[j];
   }
   int sum  = num1 + num2;
   while (sum != 0)
   {
       int rem = sum % 10;
       ans.push_back(rem);
       sum /= 10;
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
void print(vector<int>ans,int size){
    for(int i =0 ;i < size; i++){
        cout << ans[i]<< " ";
    }cout << endl;
}
int main(){

    vector<int>arr1{1,2,3,4};
    vector<int>arr2{1,7};
    vector<int>ans;
     ans = add_array(arr1,4,arr2,2);
     print(ans,4);
    return 0;

}