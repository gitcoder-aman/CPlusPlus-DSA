/*
Problem-
Given a square matric A & its number of rows(or columns) N,
return the transpose of A.
The transpose of a matric is the matric flipped over it's main
diagonal,switching the row and column indices of the matrix.
Constraints-
1<=N<=1000 
*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size ; j++)
        {
            cin >> arr[i][j];
       } 
    }
    for (int i = 0; i < size; i++)
    {
        
        for (int j = i; j < size; j++)
        {
            //swap
            int temp =arr[i][j];
             arr[i][j] = arr[j][i];
             arr[j][i] = temp;
        }
    }
        for (int i = 0; i < size; i++)
        {
             for (int j = 0; j < size; j++)
             {
                 cout << arr[i][j] << " ";
             }
             cout << endl;
             
        }
        
        
        
}
