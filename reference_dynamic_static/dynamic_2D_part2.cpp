#include<iostream>
using namespace std;

int main(){

    

   /* int n,m; // bad code
    cin >> n >> m;
    int arr[n][m];*/
    
     // for square matrix


    int n;
    cin >> n;
    
    //create 2D array in dynamic
    int** arr = new int*[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    //creation done

    //taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }   
    }

    //giving output

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    
     for (int i = 0; i < n; i++) // release memory from Heap
    {
        delete [] arr[i];
    }

    delete [] arr;
    
    return 0;

}