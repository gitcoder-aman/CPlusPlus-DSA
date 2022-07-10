#include<iostream>
using namespace std;

void triplesum(int arr[],int size,int sum){

       int flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if((arr[i] + arr[j] + arr[k]) == sum){
                    cout << arr[i]<<" ";
                    cout << arr[j]<<" ";
                    cout << arr[k]<<" ";
                    flag = 1;
                }
            }
             if (flag == 1)
               break;
        }
       if (flag == 1)
       break;
    }
    
}
int main(){

     int arr[5] = {10,5,5,5,2};
     int sum = 12;

     triplesum(arr,5,sum);

    return 0;

}