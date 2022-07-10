#include<iostream>
using namespace std;

int main(){

     int a[6] = {7,-2,3,4,9,-1};
    int firstLarge = INT_MIN;
    int secondLarge = INT_MIN;
          for(int i = 0;i < 5; i++){
             if(firstLarge < a[i]){
                 secondLarge = firstLarge;
                 firstLarge = a[i];
             }
              else if(firstLarge > a[i] && a[i] > secondLarge){
                 secondLarge = a[i];
             }
          }
          cout << firstLarge << secondLarge ;
    return 0;

}