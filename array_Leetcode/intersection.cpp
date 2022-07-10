#include<iostream>
#include<vector>
using namespace std;

/*void intersection(int arr1[],int size1,int arr2[],int size2){
     
     int ans;
     int store[5];int k = 0;

    for (int i = 0; i < size1; i++)
    {
        int element = arr1[i];
         
         for (int j = 0; j < size2; j++)
         {
           if(element < arr2[j])
           break;
             if (element == arr2[j])
             {
                 store[k] = element;
                 arr2[j] = -2;
                 k++;
                 break;
             }
             
         }
         
    }
    for(int l = 0;l < k;l++){
        cout << store[l]<< " ";
    }
    
}*/
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0,j = 0;
    vector<int>ans;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
void print(vector<int>&ans){
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    
}
int main(){

    // int arr1[6]={1,2,2,2,3,4}; // sorted order accending
    // int arr2[4]={2,2,3,3};
    vector<int>arr1{1,2,2,2,3,4};
    vector<int>arr2{2,2,3,3};
   // intersection(arr1,6,arr2,4);
   vector<int>ans =  findArrayIntersection(arr1,6,arr2,4);
   print(ans);
    return 0;

}