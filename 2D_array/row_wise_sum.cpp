#include<iostream>
using namespace std;

void row_sum(int arr[][3],int row,int col){
   int maxi = INT_MIN;
   int rowIndex = -1;
       for(int i = 0; i < row ; i++ ){
   int sum = 0;

           for (int j = 0; j < col; j++)
           {
                sum += arr[i][j];
           }
           cout<< sum << " ";

            if (maxi < sum){

         maxi = sum;
            rowIndex = i;

            }
       }cout<<endl;
       cout <<  "max number of sum and row :"<<endl;
       cout << maxi<<" "<< rowIndex<<endl;
}
int main(){

    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cin >> arr[i][j];
        }
        cout<<endl;
    }
    row_sum(arr,3,3);
    return 0;

}