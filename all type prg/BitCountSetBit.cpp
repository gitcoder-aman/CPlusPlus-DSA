#include<iostream>
using namespace std;
void countBit(int n){
    int counter=0;
    for(int i=1; i<=n;i++){
        int num = i;
    while(num)                                  // 1 to n
    {                                   //    1 to 3  count setbit
        num=(num & (num-1));            //    1= 01  =     1
       counter++;                       //    2= 10  =     1
    }                                   //    3= 11  =     2
    }                                   //      Total SetBit= 4 ans.
    cout <<  counter << endl;
}
int main(){

    countBit(3);
    return 0;
}