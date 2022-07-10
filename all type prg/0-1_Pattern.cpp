#include<iostream>
using namespace std;
int main(){

    int i,j,n;
    bool TRUE=1, FALSE=0;
    //cout<<"Enter No of term";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            // if(i%2==0){
            // if (j%2==0)
            // {
            //     cout<<TRUE;
            // }
            // else
            // {
            //     cout<<FALSE;
            // }}
            // else{
            //      if (j%2!=0)
            // {
            //     cout<<TRUE;
            // }
            // else
            // {
            //     cout<<FALSE;
            // }
            // }
            if((i+j)%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}