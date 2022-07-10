#include<iostream>
using namespace std;

bool isfound(int arr[][4],int row,int col, int target){  // 

     for (int i = 0; i < row; i++)
     {
         for (int j = 0; j < col; j++)
         {
             if( arr[i][j] == target){
                 return 1;
             }
         }
         
     }
     return 0;
     
}
int main(){

    //create 2d array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; // row wise input
    //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4;j++)
        {
            cin >> arr[i][j];
        }
        cout<<endl;
    }
    cout << "Enter a number for serching in this array";
    int target;
    cin >> target;
    if(isfound(arr,3,4,target)){
        cout << "found";
    }
    else
    cout << "Not found";
    
    return 0;

}