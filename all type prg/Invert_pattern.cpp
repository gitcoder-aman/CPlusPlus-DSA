#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter No of term";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
         cout<<endl;
    }
}