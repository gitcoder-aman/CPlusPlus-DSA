#include<iostream>
using namespace std;
class Bit
{
    public:
    int complement( int value){
         
         int num = value;
         int mask = 0;
         int ans;
         if(value == 0)
         return 1;
         while (value != 0)
         {
              mask = (mask << 1) | 1;
              value = value >> 1;
         }
          ans = (~num) & mask;
           return ans;
    }
};


int main(){
    
    Bit obj;
    int result;
     result = obj.complement(5 );
     cout << result;

}