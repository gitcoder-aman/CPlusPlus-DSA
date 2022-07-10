#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter No of term";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
           cout<<" ";
        }
     int k=1;
    for(j=1;j<=i;j++){
       cout<<k<<" ";
       k++;
    }
    cout<<endl;
    }
}