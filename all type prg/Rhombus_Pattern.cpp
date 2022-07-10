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
    for(int k=1;k<=n;k++){
       cout<<"* "; 
    }
       cout<<endl;
    }
}