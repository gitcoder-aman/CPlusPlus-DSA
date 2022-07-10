#include<iostream>
using namespace std;
void reverseBit(int n)
{
//      unsigned int reverse;
//      for (int i = 1; i < 31; i++)
//      {
//          reverse=n << i;
//      }
//    // reverse= n << 30;
//    cout << reverse << endl;

unsigned int b=0;
 for(int i=0;i<32;i++)
 {
    b=b<<1;cout<<b<<endl;
    b=b|n&1;cout<<b<<endl; // Right to left presedence
    n=n>>1;cout<<n<<endl;
    
 }
  cout << b<<endl; 
}
int main(){

    reverseBit(3);
    return 0;
}