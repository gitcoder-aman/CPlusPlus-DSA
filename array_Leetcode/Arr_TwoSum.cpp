#include<iostream>
using namespace std;
int main()
{
        int nums[]={2,7,11,15};
        int  target =13;
        for(int i=0;i<4;i++){
            for(int j=1;j<4-i;j++)
            {
                 if(nums[i] + nums[i+j]==target)
                     {
                        cout << i <<" " << j<<endl;
                         break;
                     }
            }
        }
}