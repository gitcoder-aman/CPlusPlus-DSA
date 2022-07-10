#include<iostream>
using namespace std;

void transpose_Matrix(int a[][3],int n){

    for(int i = 0;i < n ;i++){
        for (int j = 0; j < i; j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }cout << endl;
        
    }
    
}
int main(){

    int a[3][3] = {1,2,3,
                   4,5,6,
                   7,8,9};

    transpose_Matrix(a,3);
    return 0;

}