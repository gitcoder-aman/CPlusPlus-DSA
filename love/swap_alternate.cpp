#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){

     for (int i = 0; i < size; i+=2)
      {
          int temp;
          if(i+1 < size)
          swap(arr[i],arr[i+1]);
        //   {
        //       temp = arr[i];
        //       arr[i] = arr[i+1];
        //       arr[i+1] = temp;
        //   }
      }

      for (int i = 0; i < size; i++)
      {
          cout << arr[i]<< " ";
      }
      cout << endl;
      
}
int main(){

      int even [6]={1,2,7,8,5,9};
      int odd [5] = {11,33,9,76,43};
      swapAlternate(even,6);
      swapAlternate(odd,5);
      
    return 0;

}