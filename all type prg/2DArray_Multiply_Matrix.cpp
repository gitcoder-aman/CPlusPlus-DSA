/*
Problem-
Given two 2-Dimensional arrays of size n1Xn2 and n2xn3.Your
task is to multiply these matrices and output the multiplied matrix.
constraints-
1<=n1,n2,n3<=300
*/
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    int arr1[n1][n2];
    int arr2[n2][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            cin >> arr1[i][j]; 
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
            cin >> arr2[i][j]; 
    }
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;

        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
         {
             for (int k = 0; k < n2; k++)
             {
                 ans[i][j] += arr1[i][k]*arr2[k][j];
             }
             
         }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }  
}