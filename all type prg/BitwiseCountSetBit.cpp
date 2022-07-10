#include<iostream>
using namespace std;
int countsetBit(int n){
    int counter=0;
    while (n)
    {
        if(n & 1)
        {
           counter++;
        }
         n = n >> 1;
    }
    return counter;
}
int main(){

// Count setBit
   cout << countsetBit(13)<<endl; // 13- 1101

}