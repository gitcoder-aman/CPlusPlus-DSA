#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
     // Decimal to Binary
    int n;

    cin >> n;
    int i = 0;
    int ans = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
        
    //     ans =( bit * pow(10,i) )+ ans;

    //     n = n >> 1;
    //     i++;
    // }
    // Binary to Decimal
    while (n != 0)
    {
        int digit = n % 10;  //bit = n & 1; as a decimal input understand computer
          if(digit == 1)
          {
              ans = ans + pow(2,i);
          }
          n /= 10;//n = n >> 1;
          i++;
    }
    
    cout << ans << endl;
}