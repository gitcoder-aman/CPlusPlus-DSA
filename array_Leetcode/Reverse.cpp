#include<iostream>
using namespace std;
class Solution {
public:
      int reverse(int x) {
     
      int rev = 0;
        int rem;
        while(x!=0){
                rem =x%10;
            if((rev>INT_MAX/10) || (rev<INT_MIN/10))
                     return 0;
                rev = (rev*10)+rem;
                x /=10;
        }
        return rev;
    }
    // void show_ans(){
    //     cout << rev;
    // }
   
};
int main(){

    Solution a1;
     int ans;
     ans = a1.reverse(123);
     cout << ans;
     //a1.show_ans();
}