#include<iostream>
#include<math.h>
using namespace std;
class solution{
    public:
        bool boolispowerofTwo(long n)
        {
           // int ans = 1;
             // for (int i = 0; i <= 30; i++)
             // {
        //1.        //   int ans = pow(2,i);
                //   if (ans == n)
                //   {
                //       return true;
                //   }
          //2.      if(ans == n){
            //         return true;
            //     }
            //     if(ans < INT_MAX/2)
            //     ans = ans *2;
            //   }
            //   return false;

            if (n != 0)
        {
            return !(n & (n-1));   // 1 return
            // if (n == 0)
            // {
            //      return true;
            // }
        }
        return false;
        
     }
        
        
};
int main(){

    solution obj;
    cout << obj.boolispowerofTwo(15);
     return 0;
}