#include<iostream>
using namespace std;
int countBit(int n){
    int countBit = 0;
    for (int i = 2; i <= n; i++)
    {
        int num = i;
         while(num)
      {
        if(num & 1) //  num=(num & (num-1));  
        { countBit++;}
         num = num >> 1;//
      }
    
    }
      
    return countBit;
}
int main(){

    cout << countBit(3);
}