#include<iostream>
using namespace std;

// Heap allocation in dynamic
//  topic 
// how to create a 2D array dynamically
// input/output
// memory free kaise karani hai

// https://www.codingninjas.co m/codestudio/guided-paths/basics-of-c/content/118785/offering/1381146
int main(){

    int row;
    cin >> row;
    
    int col;
    cin >> col;

    //create 2D array in dynamic
    int** arr = new int*[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    //creation done

    //taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }   
    }

    //giving output

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    //releasing memory

    for (int i = 0; i < row; i++)  // release memory from Heap
    {
        delete [] arr[i];
    }

    delete [] arr;

    return 0;

}