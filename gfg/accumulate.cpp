#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){

    // vector<int> arr{1,2,3,4};
    // int sum = accumulate(arr.begin(), arr.end(),0);
    int  arr[]  = {1,4,5,6,7};
    int n = 5;
    int sum = accumulate(arr,arr+n,0);
    cout << sum;
    return 0;

}