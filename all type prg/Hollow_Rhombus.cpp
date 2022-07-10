#include<iostream>
using namespace std;
int main(){

    int i,j,n;
    cout<<"Enter No of term";
    cin>>n;

    for(i=1;i<=n;i++){
    for(j=i;j<n;j++){
        cout<<" ";
    }
    for(j=1;j<=n;j++){
        if (i==1 || i==n || j==1|| j==n)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
    }
}