#include<iostream>
using namespace std;
int main()
{
    int n;
    int p=0;
   cout<<"Enter no of term"<<endl;
cin>>n;
  
    for(int i=1;i<=n;i++){
        
        for (int j = 1; j <= n; j++)
        {
            if (i>=j)
            {
                p++;
              cout<<p<<" ";                
            }
        }
        cout<<endl;
    }

}
