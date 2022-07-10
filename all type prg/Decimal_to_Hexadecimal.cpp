#include<iostream>
using namespace std;
string Decimal_to_Hexadecimal(int n)
{
    int x=1;
    string ans = "";
    while(x <= n)
        x *= 16;
        x/=16;  // Last Value store in x is divisible by 16
        cout<<x<<endl;
    
    while(x > 0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;
 
        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else{
            char c= 'A' + lastDigit - 10;
            ans.push_back(c);
        }
        
    }
     return ans;
}
int main(){

int n;
    cin>>n;
    cout<<Decimal_to_Hexadecimal(n);
}