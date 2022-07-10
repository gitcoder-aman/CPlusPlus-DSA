#include<iostream>
using namespace std;

void subarray(int arr[],int n,int arr_q[],int q){
   
   int ans;
    for (int i = 0; i < q ; i++) // No of iteration according to query
    {
        for (int j = 1; j < arr_q[i] ; j++)
        {
            ans = arr[i] & arr[j];
        }
        cout << ans << " ";
    } 
}
int main(){
 
    int arr[4] = {3,7,9,16};
    int q;
    cout << "No of Query";
    cin >> q;

    int arr_q[q];
    for(int i = 0 ;i < q; i++){
        cout << "Query "<< i;
        cin >> arr_q[i];
    }
     subarray(arr,4,arr_q,q);
    return 0;

}