#include<iostream>
using namespace std;
void getBit(int n,int pos){

    int mask;
    mask  = 1 << pos;
    if ((n & mask)!=0)
    {
        cout << "Get Bit "<< true << endl;
    }
    else{
        cout << "Get Bit " << false << endl;
    } 
}
void setBit(int n,int pos){
    int mask;
    mask = 1 << pos;
    int res = (n|mask);
    if ((n | mask)!=0)
    {
        cout << "Set Bit "<< true << endl;;
        cout <<"After Set Bit "<< res<<endl; // you have to only change (0 to 1)
    } 
}
void clearBit1(int n,int pos){
    int mask;
    mask = 1 << pos;
    int res = n ^ mask;
    if ((n ^ mask)!=0)
    {
        cout << "1Clear Bit "<<true << endl;
        cout << "1After Clear Bit "<< res<< endl;  // you have to both change (0 to 1) or (1 to 0)
    }
}
void clearBit2(int n,int pos){
    int mask;
    mask = ~(1 << pos);
    int res = (n & mask);
    cout <<"2After Clear Bit "<< res << endl;   // you have to only change (1 to 0)
}
int main(){
    getBit(10,3);  // 10 - 1010
    setBit(10,2);
    clearBit1(10,0);
    clearBit2(10,0);
    return 0;
}
