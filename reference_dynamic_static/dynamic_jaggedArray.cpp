#include<iostream>
using namespace std;

int main(){

     // jagged array

      // take no of row for array.
    int row;
    cout << "enter no of rows: ";
    cin >> row;

    // take length of each row and store it in array col.
    int *col = new int[row];

    for (int i=0 ; i<row ; i++){
        cout << "enter no of elements in "<<i+1<<" row:";
        int n;
        cin >> n;
        col[i]=n;
    }

    // create stagged array
    int *arr = new int [row];
    for (int i = 0 ; i<row ; i++){
        arr[i] = new int[col[i]];
    }

    // teke input 
    for (int i=0 ; i<row ; i++){
        cout << "enter "<< col[i]<<" elements for row "<< i+1 << " :"<< endl;
        for (int j=0 ; j<col[i] ; j++){
            int element;
            cin >> element;
            arr[i][j]=element;
        }
    }

    // display output
    for (int i=0 ; i<row ; i++){
        for (int j=0 ; j < col[i] ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}