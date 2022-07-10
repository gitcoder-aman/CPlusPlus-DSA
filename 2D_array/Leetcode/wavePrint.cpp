#include<iostream>
using namespace std;

void wavePrint(int arr[][4],int rows,int cols){
   
   // time complexity = O(rows*cols)
   for (int j = 0; j < cols; j++)
   {     
       if(j&1){
           // for odd colums
             for (int i = rows-1; i >=0 ; i--)
             {
                 cout << arr[i][j]<< " ";
          
             }
       }
       else{ 
           // for even colums
             for ( int i = 0; i < rows; i++)
           {
               cout << arr[i][j]<< " ";
           }
       }
   }
   
}
int main(){

    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    wavePrint(arr,3,4);
    return 0;

}
